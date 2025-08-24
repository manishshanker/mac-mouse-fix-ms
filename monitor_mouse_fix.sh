#!/bin/bash

# Monitor script for Mac Mouse Fix Helper
# Run this in the background to automatically restart the helper when it stops

APP_PATH="/Applications/Mac Mouse Fix.app"
HELPER_BUNDLE_ID="com.mshank.mac-mouse-fix.helper"
CHECK_INTERVAL=300  # Check every 5 minutes

log_message() {
    echo "$(date): $1" >> ~/mouse_fix_monitor.log
}

check_and_restart() {
    # Check if helper is running
    if ! pgrep -f "Mac Mouse Fix Helper" > /dev/null; then
        log_message "Helper not running, attempting restart..."
        
        # Try to restart via the main app
        if [ -d "$APP_PATH" ]; then
            open "$APP_PATH"
            sleep 2
            # Enable the helper through URL scheme
            open "macmousefix:restarthelper?delay=0"
            log_message "Restart command sent"
        else
            log_message "Main app not found at $APP_PATH"
        fi
    fi
}

log_message "Monitor started"

while true; do
    check_and_restart
    sleep $CHECK_INTERVAL
done
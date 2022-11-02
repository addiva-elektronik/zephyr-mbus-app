/* M-Bus master module for Zephyr
 *
 * Copyright (C) 2022  Addiva Elektronik AB
 *
 * Author: Joachim Wiberg <joachim.wiberg@addiva.se>
 */
#define MODULE main

#include <zephyr/logging/log.h>
#include <caf/events/module_state_event.h>
#include <zephyr/settings/settings.h>

LOG_MODULE_REGISTER(MODULE);

int main(void)
{
    /* Start CAF and signal that main have completed system setup */
    if (app_event_manager_init()) {
        LOG_ERR("Application Event Manager not initialized!");
        return 1;
    }

    settings_subsys_init();
    settings_load();

    LOG_DBG("Event manager initialized.");
    module_set_state(MODULE_STATE_READY);

    return 0;
}

/**
 * Local Variables:
 *  indent-tabs-mode: nil
 *  c-file-style: "stroustrup"
 * End:
 */

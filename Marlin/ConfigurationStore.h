#ifndef CONFIG_STORE_H
#define CONFIG_STORE_H

#include "Configuration.h"

void Config_ResetDefault();

#ifndef DISABLE_M503
void Config_PrintSettings();
void store_statistics();
#else
FORCE_INLINE void Config_PrintSettings() {}
#endif

#ifdef EEPROM_SETTINGS
  void Config_StoreSettings();
  void Config_RetrieveSettings();

  //statistics 3dator
  extern long statistics_total_print_time ;
  extern int statistics_prints_finished;
  extern int statistics_prints_stopped;

  extern bool first_startup;
  extern bool fast_mode_active;
  extern long sd_card_position;
  extern float save_autoleveling[3];
  extern float save_position[3];

#else
  FORCE_INLINE void Config_StoreSettings() {}
  FORCE_INLINE void Config_RetrieveSettings() { Config_ResetDefault(); Config_PrintSettings(); }
#endif

#endif//CONFIG_STORE_H

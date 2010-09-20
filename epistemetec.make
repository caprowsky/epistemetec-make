; $Id: epistemetec.make,v 0.0.1 17/09/2010 10:10:00 alessandrocapra Exp $

core = 6.x
projects[drupal][version] = 6.19

; Contrib modules

projects[admin_menu][subdir] = "contrib"
projects[admin_menu][version] = "1.6"

projects[advanced_help][subdir] = "contrib"
projects[advanced_help][version] = "1.2"

projects[beautytips][subdir] = "contrib"
projects[beautytips][version] = "2.0"

projects[beautytips_advanced][subdir] = "contrib"
projects[beautytips_advanced][version] = "1.0"

projects[cck][subdir] = "contrib"
projects[cck][version] = "2.8"

projects[custom_search][subdir] = "contrib"
projects[custom_search][version] = "1.4"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.7"

projects[date][subdir] = "contrib"
projects[date][version] = "2.6"

projects[features][subdir] = "contrib"
projects[features][version] = "1.0"

projects[feeds][subdir] = "contrib"
projects[feeds][version] = "1.0-beta6"

projects[i18n][subdir] = "contrib"
projects[i18n][version] = "1.7"

projects[imageapi][subdir] = "contrib"
projects[imageapi][version] = "1.8"

projects[lang_dropdown][subdir] = "contrib"
projects[lang_dropdown][version] = "1.2"

projects[logintoboggan][subdir] = "contrib"
projects[logintoboggan][version] = "1.7"

projects[panels][subdir] = "contrib"
projects[panels][version] = "3.7"

projects[smtp][subdir] = "contrib"
projects[smtp][version] = "1.0-beta5"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"

projects[views][subdir] = "contrib"
projects[views][version] = "2.11"

; Contrib modules and themes for mobile

projects[mobileplugin][subdir] = "contrib"
projects[mobileplugin][version] = "2.0"

projects[mobile_garland][subdir] = "contrib"
projects[mobile_garland][version] = "1.1"

; Contrib themes 

projects[fusion][version] = "1.0"

projects[skinr][version] = "1.5"

; Custom themes 

projects[epistemetec_theme][type] = "theme"
projects[epistemetec_theme][download][type] = "git"
projects[epistemetec_theme][download][url] = "git@github.com:caprowsky/epistemetec_theme.git"
projects[epistemetec_theme][directory_name] = "epistemetec_theme"
projects[epistemetec_theme][destination] = "themes/fusion/epistemetec_theme"

; includes[epistemetec] = "epistemetec.make"
; includes[remote] = "http://github.com/caprowsky/epistemetec/epistemetec.make"

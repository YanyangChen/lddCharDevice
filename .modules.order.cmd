cmd_/linux_work/driver_scull/modules.order := {   echo /linux_work/driver_scull/scull.ko; :; } | awk '!x[$$0]++' - > /linux_work/driver_scull/modules.order

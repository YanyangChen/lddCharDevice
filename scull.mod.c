#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbebe567c, "module_layout" },
	{ 0xc21f20d0, "seq_release" },
	{ 0xb1d26209, "seq_lseek" },
	{ 0xf247fcac, "seq_read" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x2a89f02b, "cdev_add" },
	{ 0x549f3b14, "cdev_init" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xea001fcc, "current_task" },
	{ 0x72a2034, "proc_create_data" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x7875ab58, "cdev_del" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd54b7d5, "kmem_cache_alloc_trace" },
	{ 0xf20966d6, "kmalloc_caches" },
	{ 0x3754b28a, "single_open" },
	{ 0xcf2a6966, "up" },
	{ 0xdaf20aa1, "seq_printf" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F558E66254336248CD86480");

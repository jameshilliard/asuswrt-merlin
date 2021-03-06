#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x44fd24fc, "module_layout" },
	{ 0xa379bee8, "d_path" },
	{ 0xe20994e2, "kmem_cache_destroy" },
	{ 0x95aaed15, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x405c1144, "get_seconds" },
	{ 0xedac6281, "generic_getxattr" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x9fd0343c, "__bread" },
	{ 0xbd2b6353, "unload_nls" },
	{ 0x2fefe24e, "make_bad_inode" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0x48c3b5f2, "generic_file_llseek" },
	{ 0x3896c99a, "__mark_inode_dirty" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0xfd53a8af, "bio_alloc" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xa5693df7, "posix_acl_clone" },
	{ 0x93e947e, "posix_acl_create_masq" },
	{ 0x2368be6d, "posix_acl_to_xattr" },
	{ 0x5c2b5490, "block_invalidatepage" },
	{ 0x6bca25e1, "block_write_begin" },
	{ 0x23dbda97, "truncate_inode_pages_range" },
	{ 0x6af48c63, "__lock_page" },
	{ 0xdf8a287e, "__lock_buffer" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x95eb7f26, "generic_file_aio_read" },
	{ 0x76cf47f6, "__aeabi_llsl" },
	{ 0x4d75795d, "dput" },
	{ 0x21ba09c3, "seq_printf" },
	{ 0x2d81a965, "remove_proc_entry" },
	{ 0x9fb0a534, "filp_close" },
	{ 0x12bf84e6, "d_find_alias" },
	{ 0xc1c052e3, "end_writeback" },
	{ 0xf1151122, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x5801cbdc, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x2a6abb88, "igrab" },
	{ 0x6ee3a04f, "unlock_buffer" },
	{ 0x68731063, "generic_setxattr" },
	{ 0x29b5585f, "redirty_page_for_writepage" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x554e0b46, "generic_file_aio_write" },
	{ 0xb3a307c6, "si_meminfo" },
	{ 0xba0e80c3, "__alloc_pages_nodemask" },
	{ 0x7d11c268, "jiffies" },
	{ 0x9652aa7b, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x206d8b6, "param_ops_string" },
	{ 0x95f638d5, "posix_acl_chmod_masq" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2fd61cd, "wait_for_completion" },
	{ 0xb12e058d, "mpage_readpages" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xba812f43, "proc_mkdir" },
	{ 0xf6500c7b, "mpage_readpage" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xa32a6a39, "__mutex_init" },
	{ 0xea147363, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0xbbf5e2ac, "d_rehash" },
	{ 0xe6654d6c, "d_obtain_alias" },
	{ 0x71c90087, "memcmp" },
	{ 0xcc8ba2d3, "bio_add_page" },
	{ 0x469ec821, "d_alloc_root" },
	{ 0xb6817f17, "mpage_writepages" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2455c156, "__clear_user" },
	{ 0x328a05f1, "strncpy" },
	{ 0xc1a8f1f0, "d_move" },
	{ 0x8e3c9cc3, "vprintk" },
	{ 0xf8990823, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x7540c734, "mutex_lock" },
	{ 0xaf4973c0, "__wait_on_buffer" },
	{ 0x948cde9, "num_physpages" },
	{ 0xd482c208, "mem_section" },
	{ 0x25d81960, "posix_acl_equiv_mode" },
	{ 0x5f538a82, "page_symlink" },
	{ 0x734303be, "sync_dirty_buffer" },
	{ 0xb56f6246, "wait_on_page_bit" },
	{ 0x339b6c0b, "unlock_page" },
	{ 0x5093fa82, "_clear_bit_le" },
	{ 0x3c6c4b07, "__brelse" },
	{ 0x80680c2c, "contig_page_data" },
	{ 0x6afac180, "bio_put" },
	{ 0xdb370237, "generic_removexattr" },
	{ 0xe3f56a23, "inode_init_once" },
	{ 0xef53191a, "page_follow_link_light" },
	{ 0x1522f140, "submit_bio" },
	{ 0x7dceceac, "capable" },
	{ 0xeca022fb, "block_commit_write" },
	{ 0x9f984513, "strrchr" },
	{ 0x758e3a6c, "kmem_cache_alloc" },
	{ 0xda272185, "__free_pages" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x4d0d163d, "copy_page" },
	{ 0x9de033d6, "generic_file_mmap" },
	{ 0x6a7d3b01, "posix_acl_permission" },
	{ 0x16d52958, "block_write_full_page" },
	{ 0x6817731f, "sync_blockdev" },
	{ 0x9701e077, "block_write_end" },
	{ 0x827a67a, "try_to_free_buffers" },
	{ 0x6451294b, "posix_acl_valid" },
	{ 0x5b3de1c0, "pagevec_lookup_tag" },
	{ 0xd2a8a592, "load_nls" },
	{ 0x7b69467e, "posix_acl_from_xattr" },
	{ 0xa1081b1, "__breadahead" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0xf88d38f1, "do_sync_read" },
	{ 0x9351d41b, "unlock_new_inode" },
	{ 0xc3cf1128, "in_group_p" },
	{ 0x8003f9b, "kill_block_super" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0xc27487dd, "__bug" },
	{ 0x96e3afe9, "create_proc_entry" },
	{ 0xe4c2b0bc, "unmap_underlying_metadata" },
	{ 0x7d4dd242, "clear_page_dirty_for_io" },
	{ 0x6d085fe1, "inode_change_ok" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0xef2e4d40, "kmem_cache_create" },
	{ 0x4026713e, "register_filesystem" },
	{ 0x57a6504e, "vsnprintf" },
	{ 0x10ff4af9, "__pagevec_release" },
	{ 0xcbac0340, "iput" },
	{ 0xbae1cd6f, "cont_write_begin" },
	{ 0xa8d3863e, "generic_file_fsync" },
	{ 0x37a0cba, "kfree" },
	{ 0x2c972421, "generic_permission" },
	{ 0xcd311081, "do_sync_write" },
	{ 0xba61fbd7, "pagevec_lookup" },
	{ 0xa8287635, "generic_file_splice_write" },
	{ 0x9d669763, "memcpy" },
	{ 0xda5ea696, "_test_and_set_bit_le" },
	{ 0x55271940, "load_nls_default" },
	{ 0xed95384b, "d_splice_alias" },
	{ 0x4cadcff9, "writeback_inodes_sb_if_idle" },
	{ 0x55db7ab4, "get_sb_bdev" },
	{ 0x7ade8cbf, "vmtruncate" },
	{ 0x19eb0eea, "block_truncate_page" },
	{ 0x43f14e7f, "generic_readlink" },
	{ 0xcbdf167b, "put_page" },
	{ 0x8e0ab4e6, "__blockdev_direct_IO" },
	{ 0x720c52b2, "block_sync_page" },
	{ 0xaa86de36, "__block_write_begin" },
	{ 0x5a342915, "filemap_fdatawrite_range" },
	{ 0x3812e24a, "mark_buffer_dirty" },
	{ 0x12994cbf, "mapping_tagged" },
	{ 0x3912d765, "unregister_filesystem" },
	{ 0xb5effc21, "init_special_inode" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x4f7f2d1b, "complete" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0xe80dd176, "generic_file_splice_read" },
	{ 0x8a4fa83b, "__aeabi_llsr" },
	{ 0xc8453cd7, "__getblk" },
	{ 0x8be185fc, "set_blocksize" },
	{ 0x7cae0526, "param_ops_ulong" },
	{ 0xa7b98b00, "page_put_link" },
	{ 0xaeb32117, "d_instantiate" },
	{ 0x704658fa, "flush_dcache_page" },
	{ 0x1bf1071, "filemap_flush" },
	{ 0xa8c53963, "generic_block_bmap" },
	{ 0xcec9b90a, "iget_locked" },
	{ 0x39a2ed85, "generic_fillattr" },
	{ 0x22bd7f27, "filp_open" },
	{ 0xc58f8427, "truncate_inode_pages" },
	{ 0x313341a3, "_set_bit_le" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


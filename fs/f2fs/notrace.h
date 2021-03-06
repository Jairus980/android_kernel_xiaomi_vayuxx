#define MAX_TRACE_PATHBUF_LEN 256

#define trace_android_fs_dataread_end(x, ...) {}
#define trace_android_fs_dataread_start_enabled(x, ...) 0
#define trace_android_fs_dataread_start(x, ...) {}
#define trace_android_fs_data_start_template(x, ...) {}
#define trace_android_fs_data_end_template(x, ...) {}
#define trace_android_fs_fsync_end(x, ...) {}
#define trace_android_fs_fsync_start(x, ...) {}
#define trace_android_fs_fsync_start_enabled(x, ...) 0
#define trace_android_fs_fsync_start_template(x, ...) {}
#define trace_android_fstrace_get_pathname(x, ...) {}
#define android_fstrace_get_pathname(x, ...) "/dev/null"

#define f2fs_trace_pid(x, ...) {}
#define f2fs_trace_ios(x, ...) {}
#define f2fs_build_trace_ios(x, ...) {}
#define f2fs_destroy_trace_ios(x, ...) {}

#define trace_f2fs__inode(x, ...) {}
#define trace_f2fs__inode_exit(x, ...) {}
#define trace_f2fs_sync_file_enter(x, ...) {}
#define trace_f2fs_sync_file_exit(x, ...) {}
#define trace_f2fs_sync_fs(x, ...) {}
#define trace_f2fs_iget(x, ...) {}
#define trace_f2fs_iget_exit(x, ...) {}
#define trace_f2fs_evict_inode(x, ...) {}
#define trace_f2fs_new_inode(x, ...) {}
#define trace_f2fs_unlink_enter(x, ...) {}
#define trace_f2fs_unlink_exit(x, ...) {}
#define trace_f2fs_drop_inode(x, ...) {}
#define trace_f2fs_truncate(x, ...) {}
#define trace_f2fs_truncate_data_blocks_range(x, ...) {}
#define trace_f2fs__truncate_op(x, ...) {}
#define trace_f2fs_truncate_blocks_enter(x, ...) {}
#define trace_f2fs_truncate_blocks_exit(x, ...) {}
#define trace_f2fs_truncate_inode_blocks_enter(x, ...) {}
#define trace_f2fs_truncate_inode_blocks_exit(x, ...) {}
#define trace_f2fs__truncate_node(x, ...) {}
#define trace_f2fs_truncate_nodes_enter(x, ...) {}
#define trace_f2fs_truncate_nodes_exit(x, ...) {}
#define trace_f2fs_truncate_node(x, ...) {}
#define trace_f2fs_truncate_partial_nodes(x, ...) {}
#define trace_f2fs_file_write_iter(x, ...) {}
#define trace_f2fs_map_blocks(x, ...) {}
#define trace_f2fs_background_gc(x, ...) {}
#define trace_f2fs_gc_begin(x, ...) {}
#define trace_f2fs_gc_end(x, ...) {}
#define trace_f2fs_get_victim(x, ...) {}
#define trace_f2fs_lookup_start(x, ...) {}
#define trace_f2fs_lookup_end(x, ...) {}
#define trace_f2fs_readdir(x, ...) {}
#define trace_f2fs_fallocate(x, ...) {}
#define trace_f2fs_direct_IO_enter(x, ...) {}
#define trace_f2fs_direct_IO_exit(x, ...) {}
#define trace_f2fs_reserve_new_blocks(x, ...) {}
#define trace_f2fs__submit_page_bio(x, ...) {}
#define trace_f2fs_submit_page_bio(x, ...) {}
#define trace_f2fs_submit_page_write(x, ...) {}
#define trace_f2fs__bio(x, ...) {}
#define trace_f2fs_prepare_write_bio(x, ...) {}
#define trace_f2fs_prepare_read_bio(x, ...) {}
#define trace_f2fs_submit_read_bio(x, ...) {}
#define trace_f2fs_submit_write_bio(x, ...) {}
#define trace_f2fs_write_begin(x, ...) {}
#define trace_f2fs_write_end(x, ...) {}
#define trace_f2fs__page(x, ...) {}
#define trace_f2fs_writepage(x, ...) {}
#define trace_f2fs_do_write_data_page(x, ...) {}
#define trace_f2fs_readpage(x, ...) {}
#define trace_f2fs_set_page_dirty(x, ...) {}
#define trace_f2fs_vm_page_mkwrite(x, ...) {}
#define trace_f2fs_register_inmem_page(x, ...) {}
#define trace_f2fs_commit_inmem_page(x, ...) {}
#define trace_f2fs_filemap_fault(x, ...) {}
#define trace_f2fs_writepages(x, ...) {}
#define trace_f2fs_readpages(x, ...) {}
#define trace_f2fs_write_checkpoint(x, ...) {}
#define trace_f2fs_discard(x, ...) {}
#define trace_f2fs_queue_discard(x, ...) {}
#define trace_f2fs_issue_discard(x, ...) {}
#define trace_f2fs_remove_discard(x, ...) {}
#define trace_f2fs_issue_reset_zone(x, ...) {}
#define trace_f2fs_issue_flush(x, ...) {}
#define trace_f2fs_lookup_extent_tree_start(x, ...) {}
#define trace_f2fs_lookup_extent_tree_end(x, ...) {}
#define trace_f2fs_update_extent_tree_range(x, ...) {}
#define trace_f2fs_shrink_extent_tree(x, ...) {}
#define trace_f2fs_destroy_extent_tree(x, ...) {}
#define trace_f2fs_sync_dirty_inodes(x, ...) {}
#define trace_f2fs_sync_dirty_inodes_enter(x, ...) {}
#define trace_f2fs_sync_dirty_inodes_exit(x, ...) {}
#define trace_f2fs_shutdown(x, ...) {}
#define trace_f2fs_zip_start(x, ...) {}
#define trace_f2fs_zip_end(x, ...) {}
#define trace_f2fs_compress_pages_start(x, ...) {}
#define trace_f2fs_decompress_pages_start(x, ...) {}
#define trace_f2fs_compress_pages_end(x, ...) {}
#define trace_f2fs_decompress_pages_end(x, ...) {}
#define trace_f2fs_iostat(x, ...) {}

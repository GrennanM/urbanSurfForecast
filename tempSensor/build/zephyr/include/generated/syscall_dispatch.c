/* auto-generated by gen_syscalls.py, don't edit */

/* Weak handler functions that get replaced by the real ones unless a system
 * call is not implemented due to kernel configuration.
 */

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_entropy_get_entropy(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_ipm_send(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_ipm_max_data_size_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_ipm_max_id_val_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_ipm_set_enabled(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_i2c_configure(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_i2c_transfer(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_i2c_slave_register(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_i2c_slave_unregister(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_i2c_slave_driver_register(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_i2c_slave_driver_unregister(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_uart_err_check(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_uart_poll_in(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_uart_poll_out(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_uart_irq_tx_enable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_uart_irq_tx_disable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_uart_irq_rx_enable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_uart_irq_rx_disable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_uart_irq_err_enable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_uart_irq_err_disable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_uart_irq_is_pending(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_uart_irq_update(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_uart_line_ctrl_set(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_uart_line_ctrl_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_uart_drv_cmd(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_gpio_config(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_gpio_write(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_gpio_read(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_gpio_enable_callback(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_gpio_disable_callback(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_gpio_get_pending_int(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_object_access_grant(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_object_release(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_object_alloc(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_thread_create(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_sleep(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_yield(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_wakeup(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_current_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_thread_abort(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_thread_start(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_thread_priority_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_thread_priority_set(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_thread_deadline_set(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_thread_suspend(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_thread_resume(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_is_preempt_thread(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_thread_custom_data_set(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_thread_custom_data_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_thread_name_set(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_thread_name_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_timer_start(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_timer_stop(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_timer_status_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_timer_status_sync(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_timer_remaining_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_timer_user_data_set(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_timer_user_data_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_uptime_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_uptime_get_32(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_queue_init(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_queue_cancel_wait(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_queue_alloc_append(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_queue_alloc_prepend(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_queue_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_queue_is_empty(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_queue_peek_head(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_queue_peek_tail(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_stack_alloc_init(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_stack_push(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_stack_pop(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_mutex_init(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_mutex_lock(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_mutex_unlock(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_sem_init(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_sem_take(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_sem_give(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_sem_reset(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_sem_count_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_alert_recv(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_alert_send(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_msgq_alloc_init(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_msgq_put(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_msgq_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_msgq_purge(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_msgq_num_free_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_msgq_get_attrs(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_msgq_num_used_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_pipe_alloc_init(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_pipe_put(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_pipe_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_poll(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_poll_signal_init(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_poll_signal_reset(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_poll_signal_check(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_poll_signal(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_k_str_out(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_aio_cmp_disable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_aio_cmp_get_pending_int(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_flash_read(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_flash_write(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_flash_erase(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_flash_write_protection_set(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_flash_get_page_info_by_offs(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_flash_get_page_info_by_idx(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_flash_get_page_count(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_flash_get_write_block_size(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_led_blink(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_led_set_brightness(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_led_on(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_led_off(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_can_send(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_can_attach_msgq(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_can_attach_isr(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_can_detach(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_can_configure(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_spi_transceive(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_spi_release(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_counter_start(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_counter_stop(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_counter_read(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_counter_get_pending_int(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_pwm_pin_set_cycles(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_pwm_get_cycles_per_sec(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_sensor_attr_set(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_sensor_sample_fetch(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_sensor_sample_fetch_chan(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_sensor_channel_get(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_rtc_read(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_rtc_enable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_rtc_disable(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_rtc_set_alarm(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_rtc_get_pending_int(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_i2s_buf_read(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_i2s_buf_write(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_i2s_trigger(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_dma_start(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_dma_stop(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_zsock_socket(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_zsock_close(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_zsock_bind(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_zsock_connect(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_zsock_listen(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_zsock_accept(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_zsock_sendto(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_zsock_recvfrom(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_zsock_fcntl(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_zsock_poll(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_zsock_inet_pton(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_z_zsock_getaddrinfo_internal(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr_z_errno(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr__zephyr_read(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr__zephyr_write(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr__zephyr_fputc(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
u32_t hdlr__zephyr_fwrite(u32_t arg1, u32_t arg2, u32_t arg3,
         u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);


const _k_syscall_handler_t _k_syscall_table[K_SYSCALL_LIMIT] = {
	[K_SYSCALL_ENTROPY_GET_ENTROPY] = hdlr_entropy_get_entropy,
	[K_SYSCALL_IPM_SEND] = hdlr_ipm_send,
	[K_SYSCALL_IPM_MAX_DATA_SIZE_GET] = hdlr_ipm_max_data_size_get,
	[K_SYSCALL_IPM_MAX_ID_VAL_GET] = hdlr_ipm_max_id_val_get,
	[K_SYSCALL_IPM_SET_ENABLED] = hdlr_ipm_set_enabled,
	[K_SYSCALL_I2C_CONFIGURE] = hdlr_i2c_configure,
	[K_SYSCALL_I2C_TRANSFER] = hdlr_i2c_transfer,
	[K_SYSCALL_I2C_SLAVE_REGISTER] = hdlr_i2c_slave_register,
	[K_SYSCALL_I2C_SLAVE_UNREGISTER] = hdlr_i2c_slave_unregister,
	[K_SYSCALL_I2C_SLAVE_DRIVER_REGISTER] = hdlr_i2c_slave_driver_register,
	[K_SYSCALL_I2C_SLAVE_DRIVER_UNREGISTER] = hdlr_i2c_slave_driver_unregister,
	[K_SYSCALL_UART_ERR_CHECK] = hdlr_uart_err_check,
	[K_SYSCALL_UART_POLL_IN] = hdlr_uart_poll_in,
	[K_SYSCALL_UART_POLL_OUT] = hdlr_uart_poll_out,
	[K_SYSCALL_UART_IRQ_TX_ENABLE] = hdlr_uart_irq_tx_enable,
	[K_SYSCALL_UART_IRQ_TX_DISABLE] = hdlr_uart_irq_tx_disable,
	[K_SYSCALL_UART_IRQ_RX_ENABLE] = hdlr_uart_irq_rx_enable,
	[K_SYSCALL_UART_IRQ_RX_DISABLE] = hdlr_uart_irq_rx_disable,
	[K_SYSCALL_UART_IRQ_ERR_ENABLE] = hdlr_uart_irq_err_enable,
	[K_SYSCALL_UART_IRQ_ERR_DISABLE] = hdlr_uart_irq_err_disable,
	[K_SYSCALL_UART_IRQ_IS_PENDING] = hdlr_uart_irq_is_pending,
	[K_SYSCALL_UART_IRQ_UPDATE] = hdlr_uart_irq_update,
	[K_SYSCALL_UART_LINE_CTRL_SET] = hdlr_uart_line_ctrl_set,
	[K_SYSCALL_UART_LINE_CTRL_GET] = hdlr_uart_line_ctrl_get,
	[K_SYSCALL_UART_DRV_CMD] = hdlr_uart_drv_cmd,
	[K_SYSCALL_GPIO_CONFIG] = hdlr_gpio_config,
	[K_SYSCALL_GPIO_WRITE] = hdlr_gpio_write,
	[K_SYSCALL_GPIO_READ] = hdlr_gpio_read,
	[K_SYSCALL_GPIO_ENABLE_CALLBACK] = hdlr_gpio_enable_callback,
	[K_SYSCALL_GPIO_DISABLE_CALLBACK] = hdlr_gpio_disable_callback,
	[K_SYSCALL_GPIO_GET_PENDING_INT] = hdlr_gpio_get_pending_int,
	[K_SYSCALL_K_OBJECT_ACCESS_GRANT] = hdlr_k_object_access_grant,
	[K_SYSCALL_K_OBJECT_RELEASE] = hdlr_k_object_release,
	[K_SYSCALL_K_OBJECT_ALLOC] = hdlr_k_object_alloc,
	[K_SYSCALL_K_THREAD_CREATE] = hdlr_k_thread_create,
	[K_SYSCALL_K_SLEEP] = hdlr_k_sleep,
	[K_SYSCALL_K_YIELD] = hdlr_k_yield,
	[K_SYSCALL_K_WAKEUP] = hdlr_k_wakeup,
	[K_SYSCALL_K_CURRENT_GET] = hdlr_k_current_get,
	[K_SYSCALL_K_THREAD_ABORT] = hdlr_k_thread_abort,
	[K_SYSCALL_K_THREAD_START] = hdlr_k_thread_start,
	[K_SYSCALL_K_THREAD_PRIORITY_GET] = hdlr_k_thread_priority_get,
	[K_SYSCALL_K_THREAD_PRIORITY_SET] = hdlr_k_thread_priority_set,
	[K_SYSCALL_K_THREAD_DEADLINE_SET] = hdlr_k_thread_deadline_set,
	[K_SYSCALL_K_THREAD_SUSPEND] = hdlr_k_thread_suspend,
	[K_SYSCALL_K_THREAD_RESUME] = hdlr_k_thread_resume,
	[K_SYSCALL_K_IS_PREEMPT_THREAD] = hdlr_k_is_preempt_thread,
	[K_SYSCALL_K_THREAD_CUSTOM_DATA_SET] = hdlr_k_thread_custom_data_set,
	[K_SYSCALL_K_THREAD_CUSTOM_DATA_GET] = hdlr_k_thread_custom_data_get,
	[K_SYSCALL_K_THREAD_NAME_SET] = hdlr_k_thread_name_set,
	[K_SYSCALL_K_THREAD_NAME_GET] = hdlr_k_thread_name_get,
	[K_SYSCALL_K_TIMER_START] = hdlr_k_timer_start,
	[K_SYSCALL_K_TIMER_STOP] = hdlr_k_timer_stop,
	[K_SYSCALL_K_TIMER_STATUS_GET] = hdlr_k_timer_status_get,
	[K_SYSCALL_K_TIMER_STATUS_SYNC] = hdlr_k_timer_status_sync,
	[K_SYSCALL_K_TIMER_REMAINING_GET] = hdlr_k_timer_remaining_get,
	[K_SYSCALL_K_TIMER_USER_DATA_SET] = hdlr_k_timer_user_data_set,
	[K_SYSCALL_K_TIMER_USER_DATA_GET] = hdlr_k_timer_user_data_get,
	[K_SYSCALL_K_UPTIME_GET] = hdlr_k_uptime_get,
	[K_SYSCALL_K_UPTIME_GET_32] = hdlr_k_uptime_get_32,
	[K_SYSCALL_K_QUEUE_INIT] = hdlr_k_queue_init,
	[K_SYSCALL_K_QUEUE_CANCEL_WAIT] = hdlr_k_queue_cancel_wait,
	[K_SYSCALL_K_QUEUE_ALLOC_APPEND] = hdlr_k_queue_alloc_append,
	[K_SYSCALL_K_QUEUE_ALLOC_PREPEND] = hdlr_k_queue_alloc_prepend,
	[K_SYSCALL_K_QUEUE_GET] = hdlr_k_queue_get,
	[K_SYSCALL_K_QUEUE_IS_EMPTY] = hdlr_k_queue_is_empty,
	[K_SYSCALL_K_QUEUE_PEEK_HEAD] = hdlr_k_queue_peek_head,
	[K_SYSCALL_K_QUEUE_PEEK_TAIL] = hdlr_k_queue_peek_tail,
	[K_SYSCALL_K_STACK_ALLOC_INIT] = hdlr_k_stack_alloc_init,
	[K_SYSCALL_K_STACK_PUSH] = hdlr_k_stack_push,
	[K_SYSCALL_K_STACK_POP] = hdlr_k_stack_pop,
	[K_SYSCALL_K_MUTEX_INIT] = hdlr_k_mutex_init,
	[K_SYSCALL_K_MUTEX_LOCK] = hdlr_k_mutex_lock,
	[K_SYSCALL_K_MUTEX_UNLOCK] = hdlr_k_mutex_unlock,
	[K_SYSCALL_K_SEM_INIT] = hdlr_k_sem_init,
	[K_SYSCALL_K_SEM_TAKE] = hdlr_k_sem_take,
	[K_SYSCALL_K_SEM_GIVE] = hdlr_k_sem_give,
	[K_SYSCALL_K_SEM_RESET] = hdlr_k_sem_reset,
	[K_SYSCALL_K_SEM_COUNT_GET] = hdlr_k_sem_count_get,
	[K_SYSCALL_K_ALERT_RECV] = hdlr_k_alert_recv,
	[K_SYSCALL_K_ALERT_SEND] = hdlr_k_alert_send,
	[K_SYSCALL_K_MSGQ_ALLOC_INIT] = hdlr_k_msgq_alloc_init,
	[K_SYSCALL_K_MSGQ_PUT] = hdlr_k_msgq_put,
	[K_SYSCALL_K_MSGQ_GET] = hdlr_k_msgq_get,
	[K_SYSCALL_K_MSGQ_PURGE] = hdlr_k_msgq_purge,
	[K_SYSCALL_K_MSGQ_NUM_FREE_GET] = hdlr_k_msgq_num_free_get,
	[K_SYSCALL_K_MSGQ_GET_ATTRS] = hdlr_k_msgq_get_attrs,
	[K_SYSCALL_K_MSGQ_NUM_USED_GET] = hdlr_k_msgq_num_used_get,
	[K_SYSCALL_K_PIPE_ALLOC_INIT] = hdlr_k_pipe_alloc_init,
	[K_SYSCALL_K_PIPE_PUT] = hdlr_k_pipe_put,
	[K_SYSCALL_K_PIPE_GET] = hdlr_k_pipe_get,
	[K_SYSCALL_K_POLL] = hdlr_k_poll,
	[K_SYSCALL_K_POLL_SIGNAL_INIT] = hdlr_k_poll_signal_init,
	[K_SYSCALL_K_POLL_SIGNAL_RESET] = hdlr_k_poll_signal_reset,
	[K_SYSCALL_K_POLL_SIGNAL_CHECK] = hdlr_k_poll_signal_check,
	[K_SYSCALL_K_POLL_SIGNAL] = hdlr_k_poll_signal,
	[K_SYSCALL_K_STR_OUT] = hdlr_k_str_out,
	[K_SYSCALL_AIO_CMP_DISABLE] = hdlr_aio_cmp_disable,
	[K_SYSCALL_AIO_CMP_GET_PENDING_INT] = hdlr_aio_cmp_get_pending_int,
	[K_SYSCALL_FLASH_READ] = hdlr_flash_read,
	[K_SYSCALL_FLASH_WRITE] = hdlr_flash_write,
	[K_SYSCALL_FLASH_ERASE] = hdlr_flash_erase,
	[K_SYSCALL_FLASH_WRITE_PROTECTION_SET] = hdlr_flash_write_protection_set,
	[K_SYSCALL_FLASH_GET_PAGE_INFO_BY_OFFS] = hdlr_flash_get_page_info_by_offs,
	[K_SYSCALL_FLASH_GET_PAGE_INFO_BY_IDX] = hdlr_flash_get_page_info_by_idx,
	[K_SYSCALL_FLASH_GET_PAGE_COUNT] = hdlr_flash_get_page_count,
	[K_SYSCALL_FLASH_GET_WRITE_BLOCK_SIZE] = hdlr_flash_get_write_block_size,
	[K_SYSCALL_LED_BLINK] = hdlr_led_blink,
	[K_SYSCALL_LED_SET_BRIGHTNESS] = hdlr_led_set_brightness,
	[K_SYSCALL_LED_ON] = hdlr_led_on,
	[K_SYSCALL_LED_OFF] = hdlr_led_off,
	[K_SYSCALL_CAN_SEND] = hdlr_can_send,
	[K_SYSCALL_CAN_ATTACH_MSGQ] = hdlr_can_attach_msgq,
	[K_SYSCALL_CAN_ATTACH_ISR] = hdlr_can_attach_isr,
	[K_SYSCALL_CAN_DETACH] = hdlr_can_detach,
	[K_SYSCALL_CAN_CONFIGURE] = hdlr_can_configure,
	[K_SYSCALL_SPI_TRANSCEIVE] = hdlr_spi_transceive,
	[K_SYSCALL_SPI_RELEASE] = hdlr_spi_release,
	[K_SYSCALL_COUNTER_START] = hdlr_counter_start,
	[K_SYSCALL_COUNTER_STOP] = hdlr_counter_stop,
	[K_SYSCALL_COUNTER_READ] = hdlr_counter_read,
	[K_SYSCALL_COUNTER_GET_PENDING_INT] = hdlr_counter_get_pending_int,
	[K_SYSCALL_PWM_PIN_SET_CYCLES] = hdlr_pwm_pin_set_cycles,
	[K_SYSCALL_PWM_GET_CYCLES_PER_SEC] = hdlr_pwm_get_cycles_per_sec,
	[K_SYSCALL_SENSOR_ATTR_SET] = hdlr_sensor_attr_set,
	[K_SYSCALL_SENSOR_SAMPLE_FETCH] = hdlr_sensor_sample_fetch,
	[K_SYSCALL_SENSOR_SAMPLE_FETCH_CHAN] = hdlr_sensor_sample_fetch_chan,
	[K_SYSCALL_SENSOR_CHANNEL_GET] = hdlr_sensor_channel_get,
	[K_SYSCALL_RTC_READ] = hdlr_rtc_read,
	[K_SYSCALL_RTC_ENABLE] = hdlr_rtc_enable,
	[K_SYSCALL_RTC_DISABLE] = hdlr_rtc_disable,
	[K_SYSCALL_RTC_SET_ALARM] = hdlr_rtc_set_alarm,
	[K_SYSCALL_RTC_GET_PENDING_INT] = hdlr_rtc_get_pending_int,
	[K_SYSCALL_I2S_BUF_READ] = hdlr_i2s_buf_read,
	[K_SYSCALL_I2S_BUF_WRITE] = hdlr_i2s_buf_write,
	[K_SYSCALL_I2S_TRIGGER] = hdlr_i2s_trigger,
	[K_SYSCALL_DMA_START] = hdlr_dma_start,
	[K_SYSCALL_DMA_STOP] = hdlr_dma_stop,
	[K_SYSCALL_ZSOCK_SOCKET] = hdlr_zsock_socket,
	[K_SYSCALL_ZSOCK_CLOSE] = hdlr_zsock_close,
	[K_SYSCALL_ZSOCK_BIND] = hdlr_zsock_bind,
	[K_SYSCALL_ZSOCK_CONNECT] = hdlr_zsock_connect,
	[K_SYSCALL_ZSOCK_LISTEN] = hdlr_zsock_listen,
	[K_SYSCALL_ZSOCK_ACCEPT] = hdlr_zsock_accept,
	[K_SYSCALL_ZSOCK_SENDTO] = hdlr_zsock_sendto,
	[K_SYSCALL_ZSOCK_RECVFROM] = hdlr_zsock_recvfrom,
	[K_SYSCALL_ZSOCK_FCNTL] = hdlr_zsock_fcntl,
	[K_SYSCALL_ZSOCK_POLL] = hdlr_zsock_poll,
	[K_SYSCALL_ZSOCK_INET_PTON] = hdlr_zsock_inet_pton,
	[K_SYSCALL_Z_ZSOCK_GETADDRINFO_INTERNAL] = hdlr_z_zsock_getaddrinfo_internal,
	[K_SYSCALL_Z_ERRNO] = hdlr_z_errno,
	[K_SYSCALL__ZEPHYR_READ] = hdlr__zephyr_read,
	[K_SYSCALL__ZEPHYR_WRITE] = hdlr__zephyr_write,
	[K_SYSCALL__ZEPHYR_FPUTC] = hdlr__zephyr_fputc,
	[K_SYSCALL__ZEPHYR_FWRITE] = hdlr__zephyr_fwrite,
	[K_SYSCALL_BAD] = handler_bad_syscall
};

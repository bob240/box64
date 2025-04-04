#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh...
#endif

GO(gdk_add_option_entries_libgtk_only, vFp)
GO(gdk_anchor_hints_get_type, LFv)
GO(gdk_app_launch_context_get_type, LFv)
GO(gdk_app_launch_context_new, pFv)
GO(gdk_app_launch_context_set_desktop, vFpi)
GO(gdk_app_launch_context_set_display, vFpp)
GO(gdk_app_launch_context_set_icon, vFpp)
GO(gdk_app_launch_context_set_icon_name, vFpp)
GO(gdk_app_launch_context_set_screen, vFpp)
GO(gdk_app_launch_context_set_timestamp, vFpu)
GO(gdk_atom_intern, pFpi)
GO(gdk_atom_intern_static_string, pFp)
GO(gdk_atom_name, pFp)
GO(gdk_axis_flags_get_type, LFv)
GO(gdk_axis_use_get_type, LFv)
GO(gdk_beep, vFv)
GO(gdk_broadway_cursor_get_type, LFv)
GO(gdk_broadway_display_get_type, LFv)
GO(gdk_broadway_display_hide_keyboard, vFp)
GO(gdk_broadway_display_show_keyboard, vFp)
GO(gdk_broadway_get_last_seen_time, uFp)
GO(gdk_broadway_monitor_get_type, LFv)
GO(gdk_broadway_visual_get_type, LFv)
GO(gdk_broadway_window_get_type, LFv)
GO(gdk_byte_order_get_type, LFv)
GO(gdk_cairo_create, pFp)
GO(gdk_cairo_draw_from_gl, vFppiiiiiii)
GO(gdk_cairo_get_clip_rectangle, iFpp)
GO(gdk_cairo_get_drawing_context, pFp)
GO(gdk_cairo_rectangle, vFpp)
GO(gdk_cairo_region, vFpp)
GO(gdk_cairo_region_create_from_surface, pFp)
GO(gdk_cairo_set_source_color, vFpp)
GO(gdk_cairo_set_source_pixbuf, vFppdd)
GO(gdk_cairo_set_source_rgba, vFpp)
GO(gdk_cairo_set_source_window, vFppdd)
GO(gdk_cairo_surface_create_from_pixbuf, pFpip)
GO(gdk_color_copy, pFp)
GO(gdk_color_equal, iFpp)
GO(gdk_color_free, vFp)
GO(gdk_color_get_type, LFv)
GO(gdk_color_hash, uFp)
GO(gdk_color_parse, iFpp)
GO(gdk_color_to_string, pFp)
GO(gdk_crossing_mode_get_type, LFv)
GO(gdk_cursor_get_cursor_type, iFp)
GO(gdk_cursor_get_display, pFp)
GO(gdk_cursor_get_image, pFp)
GO(gdk_cursor_get_surface, pFppp)
GO(gdk_cursor_get_type, LFv)
GO(gdk_cursor_new, pFi)
GO(gdk_cursor_new_for_display, pFpi)
GO(gdk_cursor_new_from_name, pFpp)
GO(gdk_cursor_new_from_pixbuf, pFppii)
GO(gdk_cursor_new_from_surface, pFppdd)
GO(gdk_cursor_ref, pFp)
GO(gdk_cursor_type_get_type, LFv)
GO(gdk_cursor_unref, vFp)
GO(gdk_device_free_history, vFpi)
GO(gdk_device_get_associated_device, pFp)
GO(gdk_device_get_axes, uFp)
GO(gdk_device_get_axis, iFppup)
GO(gdk_device_get_axis_use, uFpu)
GO(gdk_device_get_axis_value, iFpppp)
GO(gdk_device_get_device_type, uFp)
GO(gdk_device_get_display, pFp)
GO(gdk_device_get_has_cursor, iFp)
GO(gdk_device_get_history, iFppuupp)
GO(gdk_device_get_key, iFpupp)
GO(gdk_device_get_last_event_window, pFp)
GO(gdk_device_get_mode, uFp)
GO(gdk_device_get_name, pFp)
GO(gdk_device_get_n_axes, iFp)
GO(gdk_device_get_n_keys, iFp)
GO(gdk_device_get_position, vFpppp)
GO(gdk_device_get_position_double, vFpppp)
GO(gdk_device_get_product_id, pFp)
GO(gdk_device_get_seat, pFp)
GO(gdk_device_get_source, uFp)
GO(gdk_device_get_state, vFpppp)
GO(gdk_device_get_type, LFv)
GO(gdk_device_get_vendor_id, pFp)
GO(gdk_device_get_window_at_position, pFppp)
GO(gdk_device_get_window_at_position_double, pFppp)
GO(gdk_device_grab, uFppuiupu)
GO(gdk_device_grab_info_libgtk_only, iFpppp)
GO(gdk_device_list_axes, pFp)
GO(gdk_device_list_slave_devices, pFp)
GO(gdk_device_manager_get_client_pointer, pFp)
GO(gdk_device_manager_get_display, pFp)
GO(gdk_device_manager_get_type, LFv)
GO(gdk_device_manager_list_devices, pFpu)
GO(gdk_device_pad_feature_get_type, LFv)
GO(gdk_device_pad_get_feature_group, iFpui)
GO(gdk_device_pad_get_group_n_modes, iFpi)
GO(gdk_device_pad_get_n_features, iFpu)
GO(gdk_device_pad_get_n_groups, iFp)
GO(gdk_device_pad_get_type, LFv)
GO(gdk_device_set_axis_use, vFpuu)
GO(gdk_device_set_key, vFpuuu)
GO(gdk_device_set_mode, iFpu)
GO(gdk_device_tool_get_hardware_id, LFp)
GO(gdk_device_tool_get_serial, LFp)
GO(gdk_device_tool_get_tool_type, uFp)
GO(gdk_device_tool_get_type, LFv)
GO(gdk_device_tool_type_get_type, LFv)
GO(gdk_device_type_get_type, LFv)
GO(gdk_device_ungrab, vFpu)
GO(gdk_device_warp, vFppii)
GO(gdk_disable_multidevice, vFv)
GO(gdk_display_beep, vFp)
GO(gdk_display_close, vFp)
GO(gdk_display_device_is_grabbed, iFpp)
GO(gdk_display_flush, vFp)
GO(gdk_display_get_app_launch_context, pFp)
GO(gdk_display_get_default, pFv)
GO(gdk_display_get_default_cursor_size, uFp)
GO(gdk_display_get_default_group, pFp)
GO(gdk_display_get_default_screen, pFp)
GO(gdk_display_get_default_seat, pFp)
GO(gdk_display_get_device_manager, pFp)
GO(gdk_display_get_event, pFp)
GO(gdk_display_get_maximal_cursor_size, vFppp)
GO(gdk_display_get_monitor, pFpi)
GO(gdk_display_get_monitor_at_point, pFpii)
GO(gdk_display_get_monitor_at_window, pFpp)
GO(gdk_display_get_name, pFp)
GO(gdk_display_get_n_monitors, iFp)
GO(gdk_display_get_n_screens, iFp)
GO(gdk_display_get_pointer, vFppppp)
GO(gdk_display_get_primary_monitor, pFp)
GO(gdk_display_get_screen, pFpi)
GO(gdk_display_get_type, LFv)
GO(gdk_display_get_window_at_pointer, pFppp)
GO(gdk_display_has_pending, iFp)
GO(gdk_display_is_closed, iFp)
GO(gdk_display_keyboard_ungrab, vFpu)
GO(gdk_display_list_devices, pFp)
GO(gdk_display_list_seats, pFp)
GO(gdk_display_manager_get, pFv)
GO(gdk_display_manager_get_default_display, pFp)
GO(gdk_display_manager_get_type, LFv)
GO(gdk_display_manager_list_displays, pFp)
GO(gdk_display_manager_open_display, pFpp)
GO(gdk_display_manager_set_default_display, vFpp)
GO(gdk_display_map_keycode, iFpuppp)
GO(gdk_display_notify_startup_complete, vFpp)
GO(gdk_display_open, pFp)
GO(gdk_display_open_default_libgtk_only, pFv)
GO(gdk_display_peek_event, pFp)
GO(gdk_display_pointer_is_grabbed, iFp)
GO(gdk_display_pointer_ungrab, vFpu)
GO(gdk_display_put_event, vFpp)
GO(gdk_display_request_selection_notification, iFpp)
GO(gdk_display_set_double_click_distance, vFpu)
GO(gdk_display_set_double_click_time, vFpu)
GO(gdk_display_store_clipboard, vFppupi)
GO(gdk_display_supports_clipboard_persistence, iFp)
GO(gdk_display_supports_composite, iFp)
GO(gdk_display_supports_cursor_alpha, iFp)
GO(gdk_display_supports_cursor_color, iFp)
GO(gdk_display_supports_input_shapes, iFp)
GO(gdk_display_supports_selection_notification, iFp)
GO(gdk_display_supports_shapes, iFp)
GO(gdk_display_sync, vFp)
GO(gdk_display_warp_pointer, vFppii)
GO(gdk_drag_abort, vFpu)
GO(gdk_drag_action_get_type, LFv)
GO(gdk_drag_begin, pFpp)
GO(gdk_drag_begin_for_device, pFppp)
GO(gdk_drag_begin_from_point, pFpppii)
GO(gdk_drag_cancel_reason_get_type, LFv)
GO(gdk_drag_context_get_actions, uFp)
GO(gdk_drag_context_get_dest_window, pFp)
GO(gdk_drag_context_get_device, pFp)
GO(gdk_drag_context_get_drag_window, pFp)
GO(gdk_drag_context_get_protocol, uFp)
GO(gdk_drag_context_get_selected_action, uFp)
GO(gdk_drag_context_get_source_window, pFp)
GO(gdk_drag_context_get_suggested_action, uFp)
GO(gdk_drag_context_get_type, LFv)
GO(gdk_drag_context_list_targets, pFp)
GO(gdk_drag_context_manage_dnd, iFppu)
GO(gdk_drag_context_set_device, vFpp)
GO(gdk_drag_context_set_hotspot, vFpii)
GO(gdk_drag_drop, vFpu)
GO(gdk_drag_drop_done, vFpi)
GO(gdk_drag_drop_succeeded, iFp)
GO(gdk_drag_find_window_for_screen, vFpppiipp)
GO(gdk_drag_get_selection, pFp)
GO(gdk_drag_motion, iFppuiiuuu)
GO(gdk_drag_protocol_get_type, LFv)
GO(gdk_drag_status, vFpuu)
GO(gdk_drawing_context_get_cairo_context, pFp)
GO(gdk_drawing_context_get_clip, pFp)
GO(gdk_drawing_context_get_type, LFv)
GO(gdk_drawing_context_get_window, pFp)
GO(gdk_drawing_context_is_valid, iFp)
GO(gdk_drop_finish, vFpiu)
GO(gdk_drop_reply, vFpiu)
GO(gdk_error_trap_pop, iFv)
GO(gdk_error_trap_pop_ignored, vFv)
GO(gdk_error_trap_push, vFv)
GO(gdk_event_copy, pFp)
GO(gdk_event_free, vFp)
GO(gdk_event_get, pFv)
GO(gdk_event_get_axis, iFpup)
GO(gdk_event_get_button, iFpp)
GO(gdk_event_get_click_count, iFpp)
GO(gdk_event_get_coords, iFppp)
GO(gdk_event_get_device, pFp)
GO(gdk_event_get_device_tool, pFp)
GO(gdk_event_get_event_sequence, pFp)
GO(gdk_event_get_event_type, iFp)
GO(gdk_event_get_keycode, iFpp)
GO(gdk_event_get_keyval, iFpp)
GO(gdk_event_get_modifier_state, uFp)
GO(gdk_event_get_pointer_emulated, iFp)
GO(gdk_event_get_root_coords, iFppp)
GO(gdk_event_get_scancode, iFp)
GO(gdk_event_get_screen, pFp)
GO(gdk_event_get_scroll_deltas, iFppp)
GO(gdk_event_get_scroll_direction, iFpp)
GO(gdk_event_get_seat, pFp)
GO(gdk_event_get_source_device, pFp)
GO(gdk_event_get_state, iFpp)
GO(gdk_event_get_surface, pFp)
GO(gdk_event_get_time, uFp)
GO(gdk_event_get_type, LFv)
GO(gdk_event_get_window, pFp)
GOM(gdk_event_handler_set, vFEppp)
//GO(gdk_event_is_allocated, 
GO(gdk_event_is_scroll_stop_event, iFp)
GO(gdk_event_mask_get_type, LFv)
GO(gdk_event_new, pFi)
GO(gdk_event_peek, pFv)
GO(gdk_event_put, vFp)
GO(gdk_event_request_motions, vFp)
GO(gdk_event_sequence_get_type, LFv)
GO(gdk_event_set_device, vFpp)
GO(gdk_event_set_device_tool, vFpp)
GO(gdk_event_set_screen, vFpp)
GO(gdk_event_set_source_device, vFpp)
GO(gdk_events_get_angle, iFppp)
GO(gdk_events_get_center, iFpppp)
GO(gdk_events_get_distance, iFppp)
GO(gdk_events_pending, iFv)
GO(gdk_event_triggers_context_menu, iFp)
GO(gdk_event_type_get_type, LFv)
GO(gdk_filter_return_get_type, LFv)
GO(gdk_flush, vFv)
GO(gdk_frame_clock_begin_updating, vFp)
GO(gdk_frame_clock_end_updating, vFp)
GO(gdk_frame_clock_get_current_timings, pFp)
GO(gdk_frame_clock_get_frame_counter, lFp)
GO(gdk_frame_clock_get_frame_time, lFp)
GO(gdk_frame_clock_get_history_start, lFp)
GO(gdk_frame_clock_get_refresh_info, vFplpp)
GO(gdk_frame_clock_get_timings, pFpl)
GO(gdk_frame_clock_get_type, LFv)
GO(gdk_frame_clock_phase_get_type, LFv)
GO(gdk_frame_clock_request_phase, vFpu)
GO(gdk_frame_timings_get_complete, iFp)
GO(gdk_frame_timings_get_frame_counter, lFp)
GO(gdk_frame_timings_get_frame_time, lFp)
GO(gdk_frame_timings_get_predicted_presentation_time, lFp)
GO(gdk_frame_timings_get_presentation_time, lFp)
GO(gdk_frame_timings_get_refresh_interval, lFp)
GO(gdk_frame_timings_get_type, LFv)
GO(gdk_frame_timings_ref, pFp)
GO(gdk_frame_timings_unref, vFp)
GO(gdk_fullscreen_mode_get_type, LFv)
GO(gdk_get_default_root_window, pFv)
GO(gdk_get_display, pFv)
GO(gdk_get_display_arg_name, pFv)
GO(gdk_get_program_class, pFv)
GO(gdk_get_show_events, iFv)
GO(gdk_gl_context_clear_current, vFv)
GO(gdk_gl_context_get_current, pFv)
GO(gdk_gl_context_get_debug_enabled, iFp)
GO(gdk_gl_context_get_display, pFp)
GO(gdk_gl_context_get_forward_compatible, iFp)
GO(gdk_gl_context_get_required_version, vFppp)
GO(gdk_gl_context_get_shared_context, pFp)
GO(gdk_gl_context_get_type, LFv)
GO(gdk_gl_context_get_use_es, iFp)
GO(gdk_gl_context_get_version, vFppp)
GO(gdk_gl_context_get_window, pFp)
GO(gdk_gl_context_is_legacy, iFp)
GO(gdk_gl_context_make_current, vFp)
GO(gdk_gl_context_realize, iFpp)
GO(gdk_gl_context_set_debug_enabled, vFpi)
GO(gdk_gl_context_set_forward_compatible, vFpi)
GO(gdk_gl_context_set_required_version, vFpii)
GO(gdk_gl_context_set_use_es, vFpi)
GO(gdk_gl_error_get_type, LFv)
GO(gdk_gl_error_quark, uFv)
GO(gdk_grab_ownership_get_type, LFv)
GO(gdk_grab_status_get_type, LFv)
GO(gdk_gravity_get_type, LFv)
GOM(gdk_init, vFEpp)
GOM(gdk_init_check, iFEpp)
GO(gdk_input_mode_get_type, LFv)
GO(gdk_input_source_get_type, LFv)
GO(gdk_key_event_get_keycode, uFp)
GO(gdk_key_event_get_keyval, uFp)
GO(gdk_keyboard_grab, uFpiu)
GO(gdk_keyboard_ungrab, vFu)
GO(gdk_keymap_add_virtual_modifiers, vFpp)
GO(gdk_keymap_get_caps_lock_state, iFp)
GO(gdk_keymap_get_default, pFv)
GO(gdk_keymap_get_direction, uFp)
GO(gdk_keymap_get_entries_for_keycode, iFpuppp)
GO(gdk_keymap_get_entries_for_keyval, iFpupp)
GO(gdk_keymap_get_for_display, pFp)
GO(gdk_keymap_get_modifier_mask, uFpu)
GO(gdk_keymap_get_modifier_state, uFp)
GO(gdk_keymap_get_num_lock_state, iFp)
GO(gdk_keymap_get_scroll_lock_state, iFp)
GO(gdk_keymap_get_type, LFv)
GO(gdk_keymap_have_bidi_layouts, iFp)
GO(gdk_keymap_lookup_key, uFpp)
GO(gdk_keymap_map_virtual_modifiers, iFpp)
GO(gdk_keymap_translate_keyboard_state, iFpuuipppp)
GO(gdk_keyval_convert_case, vFupp)
GO(gdk_keyval_from_name, uFp)
GO(gdk_keyval_is_lower, iFu)
GO(gdk_keyval_is_upper, iFu)
GO(gdk_keyval_name, pFu)
GO(gdk_keyval_to_lower, uFu)
GO(gdk_keyval_to_unicode, uFu)
GO(gdk_keyval_to_upper, uFu)
GO(gdk_list_visuals, pFv)
GO(gdk_memory_texture_new, pFiiupL)
GO(gdk_modifier_intent_get_type, LFv)
GO(gdk_modifier_type_get_type, LFv)
GO(gdk_monitor_get_display, pFp)
GO(gdk_monitor_get_geometry, vFpp)
GO(gdk_monitor_get_height_mm, iFp)
GO(gdk_monitor_get_manufacturer, pFp)
GO(gdk_monitor_get_model, pFp)
GO(gdk_monitor_get_refresh_rate, iFp)
GO(gdk_monitor_get_scale_factor, iFp)
GO(gdk_monitor_get_subpixel_layout, uFp)
GO(gdk_monitor_get_type, LFv)
GO(gdk_monitor_get_width_mm, iFp)
GO(gdk_monitor_get_workarea, vFpp)
GO(gdk_monitor_is_primary, iFp)
GO(gdk_notify_startup_complete, vFv)
GO(gdk_notify_startup_complete_with_id, vFp)
GO(gdk_notify_type_get_type, LFv)
GO(gdk_offscreen_window_get_embedder, pFp)
GO(gdk_offscreen_window_get_surface, pFp)
GO(gdk_offscreen_window_set_embedder, vFpp)
GO(gdk_owner_change_get_type, LFv)
GO(gdk_paintable_get_intrinsic_height, iFp)
GO(gdk_paintable_get_intrinsic_width, iFp)
GO(gdk_paintable_get_type, LFv)
GO(gdk_paintable_snapshot, vFppdd)
GO(gdk_pango_context_get, pFv)
GO(gdk_pango_context_get_for_display, pFp)
GO(gdk_pango_context_get_for_screen, pFp)
GO(gdk_pango_layout_get_clip_region, pFpiipi)
GO(gdk_pango_layout_line_get_clip_region, pFpiipi)
GO(gdk_parse_args, vFpp)
GO(gdk_pixbuf_get_from_surface, pFpiiii)
GO(gdk_pixbuf_get_from_window, pFpiiii)
GO(gdk_pointer_grab, uFpiuppu)
GO(gdk_pointer_is_grabbed, iFv)
GO(gdk_pointer_ungrab, vFu)
GO(gdk_pre_parse_libgtk_only, vFv)
//GO(gdk__private__, 
GO(gdk_property_change, vFpppiupi)
GO(gdk_property_delete, vFpp)
GO(gdk_property_get, iFpppLLipppp)
GO(gdk_property_state_get_type, LFv)
GO(gdk_prop_mode_get_type, LFv)
GO(gdk_query_depths, vFpp)
GO(gdk_query_visual_types, vFpp)
GO(gdk_rectangle_equal, iFpp)
GO(gdk_rectangle_get_type, LFv)
GO(gdk_rectangle_intersect, iFppp)
GO(gdk_rectangle_union, vFppp)
GO(gdk_rgba_copy, pFp)
GO(gdk_rgba_equal, iFpp)
GO(gdk_rgba_free, vFp)
GO(gdk_rgba_get_type, LFv)
GO(gdk_rgba_hash, uFp)
GO(gdk_rgba_parse, iFpp)
GO(gdk_rgba_to_string, pFp)
GO(gdk_screen_get_active_window, pFp)
GO(gdk_screen_get_default, pFv)
GO(gdk_screen_get_display, pFp)
GO(gdk_screen_get_font_options, pFp)
GO(gdk_screen_get_height, iFp)
GO(gdk_screen_get_height_mm, iFp)
GO(gdk_screen_get_monitor_at_point, iFpii)
GO(gdk_screen_get_monitor_at_window, iFpp)
GO(gdk_screen_get_monitor_geometry, vFpip)
GO(gdk_screen_get_monitor_height_mm, iFpi)
GO(gdk_screen_get_monitor_plug_name, pFpi)
GO(gdk_screen_get_monitor_scale_factor, iFpi)
GO(gdk_screen_get_monitor_width_mm, iFpi)
GO(gdk_screen_get_monitor_workarea, vFpip)
GO(gdk_screen_get_n_monitors, iFp)
GO(gdk_screen_get_number, iFp)
GO(gdk_screen_get_primary_monitor, iFp)
GO(gdk_screen_get_resolution, dFp)
GO(gdk_screen_get_rgba_visual, pFp)
GO(gdk_screen_get_root_window, pFp)
GO(gdk_screen_get_setting, iFppp)
GO(gdk_screen_get_system_visual, pFp)
GO(gdk_screen_get_toplevel_windows, pFp)
GO(gdk_screen_get_type, LFv)
GO(gdk_screen_get_width, iFp)
GO(gdk_screen_get_width_mm, iFp)
GO(gdk_screen_get_window_stack, pFp)
GO(gdk_screen_height, iFv)
GO(gdk_screen_height_mm, iFv)
GO(gdk_screen_is_composited, iFp)
GO(gdk_screen_list_visuals, pFp)
GO(gdk_screen_make_display_name, pFp)
GO(gdk_screen_set_font_options, vFpp)
GO(gdk_screen_set_resolution, vFpd)
GO(gdk_screen_width, iFv)
GO(gdk_screen_width_mm, iFv)
GO(gdk_scroll_direction_get_type, LFv)
GO(gdk_seat_capabilities_get_type, LFv)
GO(gdk_seat_get_capabilities, uFp)
GO(gdk_seat_get_display, pFp)
GO(gdk_seat_get_keyboard, pFp)
GO(gdk_seat_get_pointer, pFp)
GO(gdk_seat_get_slaves, pFpu)
GO(gdk_seat_get_type, LFv)
//GOM(gdk_seat_grab, uFppuipppp)
GO(gdk_seat_ungrab, vFp)
GO(gdk_selection_convert, vFpppu)
GO(gdk_selection_owner_get, pFp)
GO(gdk_selection_owner_get_for_display, pFpp)
GO(gdk_selection_owner_set, iFppui)
GO(gdk_selection_owner_set_for_display, iFpppui)
GO(gdk_selection_property_get, iFpppp)
GO(gdk_selection_send_notify, vFppppu)
GO(gdk_selection_send_notify_for_display, vFpppppu)
GO(gdk_set_allowed_backends, vFp)
GO(gdk_set_double_click_time, vFu)
GO(gdk_set_program_class, vFp)
GO(gdk_set_show_events, vFi)
GO(gdk_setting_action_get_type, LFv)
GO(gdk_setting_get, iFpp)
GO(gdk_status_get_type, LFv)
GO(gdk_subpixel_layout_get_type, LFv)
//GO(gdk_synthesize_window_state, 
GO(gdk_test_render_sync, vFp)
GO(gdk_test_simulate_button, iFpiiuui)
GO(gdk_test_simulate_key, iFpiiuui)
GO(gdk_texture_download, vFppL)
GO(gdk_texture_get_height, iFp)
GO(gdk_texture_get_width, iFp)
GO(gdk_text_property_to_utf8_list_for_display, iFppipip)
GOM(gdk_threads_add_idle, uFEpp)
GOM(gdk_threads_add_idle_full, uFEippp)
//GOM(gdk_threads_add_timeout, uFEupp)
GOM(gdk_threads_add_timeout_full, uFEiuppp)
//GOM(gdk_threads_add_timeout_seconds, uFEupp)
//GOM(gdk_threads_add_timeout_seconds_full, uFEiuppp)
GO(gdk_threads_enter, vFv)
GO(gdk_threads_init, vFv)
GO(gdk_threads_leave, vFv)
GOM(gdk_threads_set_lock_functions, vFEpp)
GO(gdk_toplevel_get_type, LFv)
GO(gdk_touchpad_gesture_phase_get_type, LFv)
GO(gdk_unicode_to_keyval, uFu)
GO(gdk_utf8_to_string_target, pFp)
GO(gdk_visibility_state_get_type, LFv)
GO(gdk_visual_get_best, pFv)
GO(gdk_visual_get_best_depth, iFv)
GO(gdk_visual_get_best_type, uFv)
GO(gdk_visual_get_best_with_both, pFiu)
GO(gdk_visual_get_best_with_depth, pFi)
GO(gdk_visual_get_best_with_type, pFu)
GO(gdk_visual_get_bits_per_rgb, iFp)
GO(gdk_visual_get_blue_pixel_details, vFpppp)
GO(gdk_visual_get_byte_order, uFp)
GO(gdk_visual_get_colormap_size, iFp)
GO(gdk_visual_get_depth, iFp)
GO(gdk_visual_get_green_pixel_details, vFpppp)
GO(gdk_visual_get_red_pixel_details, vFpppp)
GO(gdk_visual_get_screen, pFp)
GO(gdk_visual_get_system, pFv)
GO(gdk_visual_get_type, LFv)
GO(gdk_visual_get_visual_type, uFp)
GO(gdk_visual_type_get_type, LFv)
GO(gdk_wayland_device_get_node_path, pFp)
GO(gdk_wayland_device_get_type, LFv)
GO(gdk_wayland_device_get_wl_keyboard, pFp)
GO(gdk_wayland_device_get_wl_pointer, pFp)
GO(gdk_wayland_device_get_wl_seat, pFp)
GO(gdk_wayland_device_pad_set_feedback, vFpuup)
GO(gdk_wayland_display_get_type, LFv)
GO(gdk_wayland_display_get_wl_compositor, pFp)
GO(gdk_wayland_display_get_wl_display, pFp)
GO(gdk_wayland_display_prefers_ssd, iFp)
GO(gdk_wayland_display_query_registry, iFpp)
GO(gdk_wayland_display_set_cursor_theme, vFppi)
GO(gdk_wayland_display_set_startup_notification_id, vFpp)
GO(gdk_wayland_gl_context_get_type, LFv)
GO(gdk_wayland_monitor_get_type, LFv)
GO(gdk_wayland_monitor_get_wl_output, pFp)
GO(gdk_wayland_seat_get_wl_seat, pFp)
//GO(gdk_wayland_selection_add_targets_libgtk_only, 
//GO(gdk_wayland_selection_clear_targets_libgtk_only, 
GO(gdk_wayland_toplevel_set_transient_for_exported, iFpp)
GO(gdk_wayland_window_add_frame_callback_surface, vFpp)
GO(gdk_wayland_window_announce_csd, vFp)
GO(gdk_wayland_window_announce_ssd, vFp)
//GOM(gdk_wayland_window_export_handle, iFpppp)
GO(gdk_wayland_window_get_type, LFv)
GO(gdk_wayland_window_get_wl_surface, pFp)
GO(gdk_wayland_window_remove_frame_callback_surface, vFpp)
GO(gdk_wayland_window_set_application_id, vFpp)
GO(gdk_wayland_window_set_dbus_properties_libgtk_only, vFppppppp)
GO(gdk_wayland_window_set_transient_for_exported, iFpp)
GO(gdk_wayland_window_set_use_custom_surface, vFp)
GO(gdk_wayland_window_unexport_handle, vFp)
GOM(gdk_window_add_filter, vFEppp)
GO(gdk_window_at_pointer, pFpp)
GO(gdk_window_attributes_type_get_type, LFv)
GO(gdk_window_beep, vFp)
GO(gdk_window_begin_draw_frame, pFpp)
GO(gdk_window_begin_move_drag, vFpiiiu)
GO(gdk_window_begin_move_drag_for_device, vFppiiiu)
GO(gdk_window_begin_paint_rect, vFpp)
GO(gdk_window_begin_paint_region, vFpp)
GO(gdk_window_begin_resize_drag, vFpuiiiu)
GO(gdk_window_begin_resize_drag_for_device, vFpupiiiu)
GO(gdk_window_configure_finished, vFp)
GO(gdk_window_constrain_size, vFpuiipp)
GO(gdk_window_coords_from_parent, vFpddpp)
GO(gdk_window_coords_to_parent, vFpddpp)
GO(gdk_window_create_gl_context, pFpp)
GO(gdk_window_create_similar_image_surface, pFpiiii)
GO(gdk_window_create_similar_surface, pFpuii)
GO(gdk_window_deiconify, vFp)
GO(gdk_window_destroy, vFp)
//GO(gdk_window_destroy_notify, 
GO(gdk_window_edge_get_type, LFv)
GO(gdk_window_enable_synchronized_configure, vFp)
GO(gdk_window_end_draw_frame, vFpp)
GO(gdk_window_end_paint, vFp)
GO(gdk_window_ensure_native, iFp)
GO(gdk_window_flush, vFp)
GO(gdk_window_focus, vFpu)
GO(gdk_window_freeze_toplevel_updates_libgtk_only, vFp)
GO(gdk_window_freeze_updates, vFp)
GO(gdk_window_fullscreen, vFp)
GO(gdk_window_fullscreen_on_monitor, vFpi)
GO(gdk_window_geometry_changed, vFp)
GO(gdk_window_get_accept_focus, iFp)
GO(gdk_window_get_background_pattern, pFp)
GO(gdk_window_get_children, pFp)
GO(gdk_window_get_children_with_user_data, pFpp)
GO(gdk_window_get_clip_region, pFp)
GO(gdk_window_get_composited, iFp)
GO(gdk_window_get_cursor, pFp)
GO(gdk_window_get_decorations, iFpp)
GO(gdk_window_get_device_cursor, pFpp)
GO(gdk_window_get_device_events, uFpp)
GO(gdk_window_get_device_position, pFppppp)
GO(gdk_window_get_device_position_double, pFppppp)
GO(gdk_window_get_display, pFp)
GO(gdk_window_get_drag_protocol, uFpp)
GO(gdk_window_get_effective_parent, pFp)
GO(gdk_window_get_effective_toplevel, pFp)
GO(gdk_window_get_event_compression, iFp)
GO(gdk_window_get_events, uFp)
GO(gdk_window_get_focus_on_map, iFp)
GO(gdk_window_get_frame_clock, pFp)
GO(gdk_window_get_frame_extents, vFpp)
GO(gdk_window_get_fullscreen_mode, uFp)
GO(gdk_window_get_geometry, vFppppp)
GO(gdk_window_get_group, pFp)
GO(gdk_window_get_height, iFp)
GO(gdk_window_get_modal_hint, iFp)
GO(gdk_window_get_origin, iFppp)
GO(gdk_window_get_parent, pFp)
GO(gdk_window_get_pass_through, iFp)
GO(gdk_window_get_pointer, pFpppp)
GO(gdk_window_get_position, vFppp)
GO(gdk_window_get_root_coords, vFpiipp)
GO(gdk_window_get_root_origin, vFppp)
GO(gdk_window_get_scale_factor, iFp)
GO(gdk_window_get_screen, pFp)
GO(gdk_window_get_source_events, uFpu)
GO(gdk_window_get_state, uFp)
GO(gdk_window_get_support_multidevice, iFp)
GO(gdk_window_get_toplevel, pFp)
GO(gdk_window_get_type, LFv)
GO(gdk_window_get_type_hint, uFp)
GO(gdk_window_get_update_area, pFp)
GO(gdk_window_get_user_data, vFpp)
GO(gdk_window_get_visible_region, pFp)
GO(gdk_window_get_visual, pFp)
GO(gdk_window_get_width, iFp)
GO(gdk_window_get_window_type, uFp)
GO(gdk_window_has_native, iFp)
GO(gdk_window_hide, vFp)
GO(gdk_window_hints_get_type, LFv)
GO(gdk_window_iconify, vFp)
GO(gdk_window_input_shape_combine_region, vFppii)
//GOM(gdk_window_invalidate_maybe_recurse, vFEpppp)
GO(gdk_window_invalidate_rect, vFppi)
GO(gdk_window_invalidate_region, vFppi)
GO(gdk_window_is_destroyed, iFp)
GO(gdk_window_is_input_only, iFp)
GO(gdk_window_is_shaped, iFp)
GO(gdk_window_is_viewable, iFp)
GO(gdk_window_is_visible, iFp)
GO(gdk_window_lower, vFp)
GO(gdk_window_mark_paint_from_clip, vFpp)
GO(gdk_window_maximize, vFp)
GO(gdk_window_merge_child_input_shapes, vFp)
GO(gdk_window_merge_child_shapes, vFp)
GO(gdk_window_move, vFpii)
GO(gdk_window_move_region, vFppii)
GO(gdk_window_move_resize, vFpiiii)
GO(gdk_window_move_to_rect, vFppuuuii)
GO(gdk_window_new, pFppi)
GO(gdk_window_peek_children, pFp)
GO(gdk_window_process_all_updates, vFv)
GO(gdk_window_process_updates, vFpi)
GO(gdk_window_raise, vFp)
GO(gdk_window_register_dnd, vFp)
GOM(gdk_window_remove_filter, vFEppp)
GO(gdk_window_reparent, vFppii)
GO(gdk_window_resize, vFpii)
GO(gdk_window_restack, vFppi)
GO(gdk_window_scroll, vFpii)
GO(gdk_window_set_accept_focus, vFpi)
GO(gdk_window_set_background, vFpp)
GO(gdk_window_set_background_pattern, vFpp)
GO(gdk_window_set_background_rgba, vFpp)
GO(gdk_window_set_child_input_shapes, vFp)
GO(gdk_window_set_child_shapes, vFp)
GO(gdk_window_set_composited, vFpi)
GO(gdk_window_set_cursor, vFpp)
GO(gdk_window_set_debug_updates, vFi)
GO(gdk_window_set_decorations, vFpu)
GO(gdk_window_set_device_cursor, vFppp)
GO(gdk_window_set_device_events, vFppu)
GO(gdk_window_set_event_compression, vFpi)
GO(gdk_window_set_events, vFpu)
GO(gdk_window_set_focus_on_map, vFpi)
GO(gdk_window_set_fullscreen_mode, vFpu)
GO(gdk_window_set_functions, vFpu)
GO(gdk_window_set_geometry_hints, vFppu)
GO(gdk_window_set_group, vFpp)
GO(gdk_window_set_icon_list, vFpp)
GO(gdk_window_set_icon_name, vFpp)
//GOM(gdk_window_set_invalidate_handler, vFpp)
GO(gdk_window_set_keep_above, vFpi)
GO(gdk_window_set_keep_below, vFpi)
GO(gdk_window_set_modal_hint, vFpi)
GO(gdk_window_set_opacity, vFpd)
GO(gdk_window_set_opaque_region, vFpp)
GO(gdk_window_set_override_redirect, vFpi)
GO(gdk_window_set_pass_through, vFpi)
GO(gdk_window_set_role, vFpp)
GO(gdk_window_set_shadow_width, vFpiiii)
GO(gdk_window_set_skip_pager_hint, vFpi)
GO(gdk_window_set_skip_taskbar_hint, vFpi)
GO(gdk_window_set_source_events, vFpuu)
GO(gdk_window_set_startup_id, vFpp)
GO(gdk_window_set_static_gravities, iFpi)
GO(gdk_window_set_support_multidevice, vFpi)
GO(gdk_window_set_title, vFpp)
GO(gdk_window_set_transient_for, vFpp)
GO(gdk_window_set_type_hint, vFpu)
GO(gdk_window_set_urgency_hint, vFpi)
GO(gdk_window_set_user_data, vFpp)
GO(gdk_window_shape_combine_region, vFppii)
GO(gdk_window_show, vFp)
GO(gdk_window_show_unraised, vFp)
GO(gdk_window_show_window_menu, iFpp)
GO(gdk_window_state_get_type, LFv)
GO(gdk_window_stick, vFp)
GO(gdk_window_thaw_toplevel_updates_libgtk_only, vFp)
GO(gdk_window_thaw_updates, vFp)
GO(gdk_window_type_get_type, LFv)
GO(gdk_window_type_hint_get_type, LFv)
GO(gdk_window_unfullscreen, vFp)
GO(gdk_window_unmaximize, vFp)
GO(gdk_window_unstick, vFp)
GO(gdk_window_window_class_get_type, LFv)
GO(gdk_window_withdraw, vFp)
GO(gdk_wm_decoration_get_type, LFv)
GO(gdk_wm_function_get_type, LFv)
GO(gdk_x11_app_launch_context_get_type, LFv)
GO(gdk_x11_atom_to_xatom, LFp)
GO(gdk_x11_atom_to_xatom_for_display, LFpp)
GO(gdk_x11_cursor_get_type, LFv)
GO(gdk_x11_cursor_get_xcursor, LFp)
GO(gdk_x11_cursor_get_xdisplay, pFp)
GO(gdk_x11_device_core_get_type, LFv)
GO(gdk_x11_device_get_id, iFp)
GO(gdk_x11_device_manager_core_get_type, LFv)
GO(gdk_x11_device_manager_lookup, pFpi)
GO(gdk_x11_device_manager_xi2_get_type, LFv)
GO(gdk_x11_device_xi2_get_type, LFv)
GO(gdk_x11_display_broadcast_startup_message, vFppppppppppppp)  //vaarg after 2 p
GO(gdk_x11_display_error_trap_pop, iFp)
GO(gdk_x11_display_error_trap_pop_ignored, vFp)
GO(gdk_x11_display_error_trap_push, vFp)
GO(gdk_x11_display_get_glx_version, iFppp)
GO(gdk_x11_display_get_startup_notification_id, pFp)
GO(gdk_x11_display_get_type, LFv)
GO(gdk_x11_display_get_user_time, uFp)
GO(gdk_x11_display_get_xdisplay, pFp)
GO(gdk_x11_display_grab, vFp)
GO(gdk_x11_display_manager_get_type, LFv)
GO(gdk_x11_display_set_cursor_theme, vFppi)
GO(gdk_x11_display_set_startup_notification_id, vFpp)
GO(gdk_x11_display_set_window_scale, vFpi)
GO(gdk_x11_display_string_to_compound_text, iFpppppp)
GO(gdk_x11_display_text_property_to_text_list, iFppipip)
GO(gdk_x11_display_ungrab, vFp)
GO(gdk_x11_display_utf8_to_compound_text, iFpppppp)
GO(gdk_x11_drag_context_get_type, LFv)
GO(gdk_x11_free_compound_text, vFp)
GO(gdk_x11_free_text_list, vFp)
GO(gdk_x11_get_default_root_xwindow, LFv)
GO(gdk_x11_get_default_screen, iFv)
GO(gdk_x11_get_default_xdisplay, pFv)
GO(gdk_x11_get_parent_relative_pattern, pFv)
GO(gdk_x11_get_server_time, uFp)
GO(gdk_x11_get_xatom_by_name, LFp)
GO(gdk_x11_get_xatom_by_name_for_display, LFpp)
GO(gdk_x11_get_xatom_name, pFL)
GO(gdk_x11_get_xatom_name_for_display, pFpL)
GO(gdk_x11_gl_context_get_type, LFv)
GO(gdk_x11_grab_server, vFv)
GO(gdk_x11_keymap_get_group_for_state, iFpu)
GO(gdk_x11_keymap_get_type, LFv)
GO(gdk_x11_keymap_key_is_modifier, iFpu)
GO(gdk_x11_lookup_xdisplay, pFp)
GO(gdk_x11_monitor_get_output, LFp)
GO(gdk_x11_monitor_get_type, LFv)
GO(gdk_x11_register_standard_event_type, vFpii)
GO(gdk_x11_screen_get_current_desktop, uFp)
GO(gdk_x11_screen_get_monitor_output, LFpi)
GO(gdk_x11_screen_get_number_of_desktops, uFp)
GO(gdk_x11_screen_get_screen_number, iFp)
GO(gdk_x11_screen_get_type, LFv)
GO(gdk_x11_screen_get_window_manager_name, pFp)
//GOM(gdk_x11_screen_get_xscreen, pFp)
GO(gdk_x11_screen_lookup_visual, pFpL)
GO(gdk_x11_screen_supports_net_wm_hint, iFpp)
GO(gdk_x11_set_sm_client_id, vFp)
GO(gdk_x11_surface_get_xid, LFp)
GO(gdk_x11_ungrab_server, vFv)
GO(gdk_x11_visual_get_type, LFv)
GO(gdk_x11_visual_get_xvisual, pFp)
GO(gdk_x11_window_foreign_new_for_display, pFpL)
GO(gdk_x11_window_get_desktop, uFp)
GO(gdk_x11_window_get_type, LFv)
GO(gdk_x11_window_get_xid, LFp)
GO(gdk_x11_window_lookup_for_display, pFpL)
GO(gdk_x11_window_move_to_current_desktop, vFp)
GO(gdk_x11_window_move_to_desktop, vFpu)
GO(gdk_x11_window_set_frame_extents, vFpiiii)
GO(gdk_x11_window_set_frame_sync_enabled, vFpi)
GO(gdk_x11_window_set_hide_titlebar_when_maximized, vFpi)
GO(gdk_x11_window_set_theme_variant, vFpp)
GO(gdk_x11_window_set_user_time, vFpu)
GO(gdk_x11_window_set_utf8_property, vFppp)
GO(gdk_x11_xatom_to_atom, pFL)
GO(gdk_x11_xatom_to_atom_for_display, pFpL)

DATA(gdk_display, 4)        // no hack here...
DATA(gdk_threads_lock, 4)
DATA(gdk_threads_unlock, 4)

GO(dummy_set_child_property, vFppupp)       // to get vFppupp for gtkclass.c
GO(dummy_constructor, vFLup)    // to get vFlup for gtkclass.c

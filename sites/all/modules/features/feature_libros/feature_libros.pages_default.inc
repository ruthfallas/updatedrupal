<?php
/**
 * @file
 * feature_libros.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function feature_libros_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_a1f40f95-ebf2-4f19-acdc-b29579e52216';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -99;
  $handler->conf = array(
    'title' => 'Libros',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'libros' => 'libros',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f65b4b4d-807d-45e6-97fe-1d9b2621da9d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_a1f40f95-ebf2-4f19-acdc-b29579e52216';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3eb13780-76ff-4150-810c-d6f5520ca3d9';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'medium',
      'image_link' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3eb13780-76ff-4150-810c-d6f5520ca3d9';
  $display->content['new-3eb13780-76ff-4150-810c-d6f5520ca3d9'] = $pane;
  $display->panels['left'][0] = 'new-3eb13780-76ff-4150-810c-d6f5520ca3d9';
  $pane = new stdClass();
  $pane->pid = 'new-aa1837d7-d1de-472d-99bf-206d98ee0bb6';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_isbn';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'number_integer',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'thousand_separator' => '',
      'prefix_suffix' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'aa1837d7-d1de-472d-99bf-206d98ee0bb6';
  $display->content['new-aa1837d7-d1de-472d-99bf-206d98ee0bb6'] = $pane;
  $display->panels['right'][0] = 'new-aa1837d7-d1de-472d-99bf-206d98ee0bb6';
  $pane = new stdClass();
  $pane->pid = 'new-828af536-1d29-4892-90b2-497d137b0aab';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_autor';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '828af536-1d29-4892-90b2-497d137b0aab';
  $display->content['new-828af536-1d29-4892-90b2-497d137b0aab'] = $pane;
  $display->panels['right'][1] = 'new-828af536-1d29-4892-90b2-497d137b0aab';
  $pane = new stdClass();
  $pane->pid = 'new-5b2fd5c6-5537-4ed8-8071-9006aa603aa8';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_trimmed',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'trim_length' => '600',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '5b2fd5c6-5537-4ed8-8071-9006aa603aa8';
  $display->content['new-5b2fd5c6-5537-4ed8-8071-9006aa603aa8'] = $pane;
  $display->panels['right'][2] = 'new-5b2fd5c6-5537-4ed8-8071-9006aa603aa8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3eb13780-76ff-4150-810c-d6f5520ca3d9';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_a1f40f95-ebf2-4f19-acdc-b29579e52216'] = $handler;

  return $export;
}

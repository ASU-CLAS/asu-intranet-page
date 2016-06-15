<?php
/**
 * @file
 * asu_intranet_page.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function asu_intranet_page_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:asu_intranet_page:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'asu_intranet_page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = 'intranet-page';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'moscone';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '50ba3fff-27e6-49e3-b08b-d94db6816715';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1431d352-35cd-45e9-b6dc-a14191d4e72d';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1431d352-35cd-45e9-b6dc-a14191d4e72d';
    $display->content['new-1431d352-35cd-45e9-b6dc-a14191d4e72d'] = $pane;
    $display->panels['contentmain'][0] = 'new-1431d352-35cd-45e9-b6dc-a14191d4e72d';
    $pane = new stdClass();
    $pane->pid = 'new-dd72a2f0-e835-4b2e-8ef6-4643f25cb04a';
    $pane->panel = 'contentmain';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'build_mode' => 'featured',
      'identifier' => '',
      'link' => 1,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dd72a2f0-e835-4b2e-8ef6-4643f25cb04a';
    $display->content['new-dd72a2f0-e835-4b2e-8ef6-4643f25cb04a'] = $pane;
    $display->panels['contentmain'][1] = 'new-dd72a2f0-e835-4b2e-8ef6-4643f25cb04a';
    $pane = new stdClass();
    $pane->pid = 'new-fd2b16c6-c731-46c1-abb9-bcf3df83425a';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'easy_breadcrumb-easy_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fd2b16c6-c731-46c1-abb9-bcf3df83425a';
    $display->content['new-fd2b16c6-c731-46c1-abb9-bcf3df83425a'] = $pane;
    $display->panels['header'][0] = 'new-fd2b16c6-c731-46c1-abb9-bcf3df83425a';
    $pane = new stdClass();
    $pane->pid = 'new-31c94f05-7e89-411b-9bdc-ab4d3b9517d4';
    $pane->panel = 'header';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '31c94f05-7e89-411b-9bdc-ab4d3b9517d4';
    $display->content['new-31c94f05-7e89-411b-9bdc-ab4d3b9517d4'] = $pane;
    $display->panels['header'][1] = 'new-31c94f05-7e89-411b-9bdc-ab4d3b9517d4';
    $pane = new stdClass();
    $pane->pid = 'new-1b960151-7d6d-4449-b406-e8ae5c1d633b';
    $pane->panel = 'sidebar';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 0,
      'parent' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '2',
      'follow' => 0,
      'depth' => 0,
      'expanded' => 1,
      'sort' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1b960151-7d6d-4449-b406-e8ae5c1d633b';
    $display->content['new-1b960151-7d6d-4449-b406-e8ae5c1d633b'] = $pane;
    $display->panels['sidebar'][0] = 'new-1b960151-7d6d-4449-b406-e8ae5c1d633b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:asu_intranet_page:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:asu_intranet_page:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'asu_intranet_page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = 'page-default';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'de085905-beb3-4a33-a4f1-2e1067937f26';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-eaf30b9d-8fee-497b-a5f9-7ec1d7cc7d81';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => '',
        'image_style' => 'panopoly_image_half',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'eaf30b9d-8fee-497b-a5f9-7ec1d7cc7d81';
    $display->content['new-eaf30b9d-8fee-497b-a5f9-7ec1d7cc7d81'] = $pane;
    $display->panels['contentmain'][0] = 'new-eaf30b9d-8fee-497b-a5f9-7ec1d7cc7d81';
    $pane = new stdClass();
    $pane->pid = 'new-4cb042c7-ae20-4605-b127-270ecc5aeff7';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4cb042c7-ae20-4605-b127-270ecc5aeff7';
    $display->content['new-4cb042c7-ae20-4605-b127-270ecc5aeff7'] = $pane;
    $display->panels['contentmain'][1] = 'new-4cb042c7-ae20-4605-b127-270ecc5aeff7';
    $pane = new stdClass();
    $pane->pid = 'new-70e8393a-91d8-4831-9071-876b65a455f0';
    $pane->panel = 'contentmain';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '70e8393a-91d8-4831-9071-876b65a455f0';
    $display->content['new-70e8393a-91d8-4831-9071-876b65a455f0'] = $pane;
    $display->panels['contentmain'][2] = 'new-70e8393a-91d8-4831-9071-876b65a455f0';
    $pane = new stdClass();
    $pane->pid = 'new-63d786b3-3225-4cce-a0d7-69c04d4ab613';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '63d786b3-3225-4cce-a0d7-69c04d4ab613';
    $display->content['new-63d786b3-3225-4cce-a0d7-69c04d4ab613'] = $pane;
    $display->panels['contentmain'][3] = 'new-63d786b3-3225-4cce-a0d7-69c04d4ab613';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-eaf30b9d-8fee-497b-a5f9-7ec1d7cc7d81';
  $panelizer->display = $display;
  $export['node:asu_intranet_page:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:asu_intranet_page:default:featured';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'asu_intranet_page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'featured';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '16f1272c-b879-46c7-b957-3c25728ff672';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0c820d6e-a6e5-4219-8d25-002eca95f5f9';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => 'content',
        'image_style' => 'panopoly_image_half',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0c820d6e-a6e5-4219-8d25-002eca95f5f9';
    $display->content['new-0c820d6e-a6e5-4219-8d25-002eca95f5f9'] = $pane;
    $display->panels['contentmain'][0] = 'new-0c820d6e-a6e5-4219-8d25-002eca95f5f9';
    $pane = new stdClass();
    $pane->pid = 'new-06359f1a-daf7-4f2c-949b-1dd848f969e0';
    $pane->panel = 'contentmain';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '06359f1a-daf7-4f2c-949b-1dd848f969e0';
    $display->content['new-06359f1a-daf7-4f2c-949b-1dd848f969e0'] = $pane;
    $display->panels['contentmain'][1] = 'new-06359f1a-daf7-4f2c-949b-1dd848f969e0';
    $pane = new stdClass();
    $pane->pid = 'new-64905286-4a4b-476b-bcc0-99e94894a188';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_summary_or_trimmed',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'trim_length' => '250',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '64905286-4a4b-476b-bcc0-99e94894a188';
    $display->content['new-64905286-4a4b-476b-bcc0-99e94894a188'] = $pane;
    $display->panels['contentmain'][2] = 'new-64905286-4a4b-476b-bcc0-99e94894a188';
    $pane = new stdClass();
    $pane->pid = 'new-adb30413-ad99-4dfc-8bda-79f15c5220a4';
    $pane->panel = 'contentmain';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'featured',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'adb30413-ad99-4dfc-8bda-79f15c5220a4';
    $display->content['new-adb30413-ad99-4dfc-8bda-79f15c5220a4'] = $pane;
    $display->panels['contentmain'][3] = 'new-adb30413-ad99-4dfc-8bda-79f15c5220a4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-0c820d6e-a6e5-4219-8d25-002eca95f5f9';
  $panelizer->display = $display;
  $export['node:asu_intranet_page:default:featured'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:asu_intranet_page:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'asu_intranet_page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = 'page-teaser';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '6c0e641c-0877-4e86-97fa-55591c5292ce';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2a0b29bc-658d-4f7d-8fe9-5ee765853be3';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => 'content',
        'image_style' => 'panopoly_image_quarter',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2a0b29bc-658d-4f7d-8fe9-5ee765853be3';
    $display->content['new-2a0b29bc-658d-4f7d-8fe9-5ee765853be3'] = $pane;
    $display->panels['contentmain'][0] = 'new-2a0b29bc-658d-4f7d-8fe9-5ee765853be3';
    $pane = new stdClass();
    $pane->pid = 'new-5a4c805c-9073-40bd-b880-683c5f75157b';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_summary_or_trimmed',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'trim_length' => '600',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5a4c805c-9073-40bd-b880-683c5f75157b';
    $display->content['new-5a4c805c-9073-40bd-b880-683c5f75157b'] = $pane;
    $display->panels['contentmain'][1] = 'new-5a4c805c-9073-40bd-b880-683c5f75157b';
    $pane = new stdClass();
    $pane->pid = 'new-4fa51fe3-93e8-4ea1-abcb-cbbdef82fc13';
    $pane->panel = 'contentmain';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'teaser',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4fa51fe3-93e8-4ea1-abcb-cbbdef82fc13';
    $display->content['new-4fa51fe3-93e8-4ea1-abcb-cbbdef82fc13'] = $pane;
    $display->panels['contentmain'][2] = 'new-4fa51fe3-93e8-4ea1-abcb-cbbdef82fc13';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2a0b29bc-658d-4f7d-8fe9-5ee765853be3';
  $panelizer->display = $display;
  $export['node:asu_intranet_page:default:teaser'] = $panelizer;

  return $export;
}

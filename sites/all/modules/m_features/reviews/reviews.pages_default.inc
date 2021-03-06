<?php
/**
 * @file
 * reviews.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function reviews_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'reviews';
  $page->task = 'page';
  $page->admin_title = 'Отзывы';
  $page->admin_description = '';
  $page->path = 'reviews';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_reviews__panel_context_2aa5160b-f669-483b-bc41-d8a89e2ff9cf';
  $handler->task = 'page';
  $handler->subtask = 'reviews';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Панель',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'zen_no_wrapper';
  $display->layout_settings = array(
    'main_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Отзывы';
  $display->uuid = '234e2abb-ab26-4825-b5a5-fdefa0cb3694';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1f8d31e6-bffe-4435-ade2-a97d1977b666';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'reviews-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1f8d31e6-bffe-4435-ade2-a97d1977b666';
    $display->content['new-1f8d31e6-bffe-4435-ade2-a97d1977b666'] = $pane;
    $display->panels['main'][0] = 'new-1f8d31e6-bffe-4435-ade2-a97d1977b666';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1f8d31e6-bffe-4435-ade2-a97d1977b666';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['reviews'] = $page;

  return $pages;

}

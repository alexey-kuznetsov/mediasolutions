<?php
/**
 * @file
 * onepage_starter_kit.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function onepage_starter_kit_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'about';
  $page->task = 'page';
  $page->admin_title = 'About';
  $page->admin_description = 'This page can\'t contain variable topics, about us, what we do, who we are.. etc.';
  $page->path = 'about';
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
  $handler->name = 'page_about_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'about';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'About OnePage';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => ' Vestibulum sollicitudin eleifend orci, adipiscing faucibus enim sollicitudin nec. Nulla facilisi. Aliquam lorem leo, pretium eget aliquet sit amet, ultricies sed nibh. Sed id dolor at nisi pretium luctus vulputate a libero. Duis a erat velit, hendrerit porta magna. Ut hendrerit dignissim euismod. Aenean mi augue, rutrum sit amet egestas quis, suscipit ut dolor. Proin malesuada dolor eu nisi adipiscing sit amet auctor libero vehicula. Donec convallis tempor odio nec laoreet. Pellentesque et fermentum ante.

Donec pretium, mi non volutpat pulvinar, lorem est varius elit, et faucibus sem dui eget augue. Fusce blandit, sapien quis tincidunt sollicitudin, turpis sem semper purus, eget consequat metus nisl non enim. Morbi lacinia leo a augue interdum sit amet molestie ligula sollicitudin. Maecenas dui orci, faucibus sit amet mattis sed, ultricies nec ante. Nunc a euismod leo. Curabitur faucibus lobortis ipsum sit amet sollicitudin. Aenean leo sem, vulputate ut tincidunt eu, dapibus vel diam. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Morbi sed nisi non metus semper molestie. ',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['center'][0] = 'new-1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'featured';
  $page->task = 'page';
  $page->admin_title = 'Featured';
  $page->admin_description = 'The featured area is what the user sees first. It usually contains information that are visually appealing and straight to the point.';
  $page->path = 'featured';
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
  $handler->name = 'page_featured_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'featured';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Features';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed a risus porta massa aliquet semper sed ac libero. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Duis tempus lacus dictum magna luctus a rhoncus erat pretium. Sed hendrerit augue quis mi vehicula et pretium turpis rutrum. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Cras sed tincidunt metus. Nullam at tortor risus. Nunc dictum nisi vel neque elementum gravida. Nunc tempus libero non metus gravida dapibus. Nam at turpis sem. Donec id nibh libero, ac luctus nisi. Suspendisse lacinia, arcu feugiat pulvinar dapibus, dui ante aliquet tellus, et imperdiet tortor mauris quis arcu.

Maecenas facilisis vehicula tellus, non dictum nisl malesuada non. Quisque rutrum egestas dui. Pellentesque vel ligula sed urna aliquam adipiscing. Maecenas in tellus est, sed sagittis dui. Aenean placerat volutpat elit, aliquet ullamcorper diam convallis non. Morbi felis velit, fermentum at gravida et, sollicitudin a lacus. Pellentesque venenatis, mauris quis gravida faucibus, nibh felis aliquam ligula, vitae vestibulum lorem odio a enim. ',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['middle'][0] = 'new-2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['featured'] = $page;

  return $pages;

}

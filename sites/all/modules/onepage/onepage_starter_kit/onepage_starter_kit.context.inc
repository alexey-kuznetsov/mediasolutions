<?php
/**
 * @file
 * onepage_starter_kit.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function onepage_starter_kit_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'onepage';
  $context->description = '';
  $context->tag = 'OnePage';
  $context->conditions = array();
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'onepage-onepage_links' => array(
          'module' => 'onepage',
          'delta' => 'onepage_links',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('OnePage');
  $export['onepage'] = $context;

  return $export;
}

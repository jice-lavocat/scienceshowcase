<?php
/**
 * @file
 * features_scienceshowcase_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function features_scienceshowcase_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Extra Links';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'extra_links';
  $fe_block_boxes->body = '<a href="http://www.cnrs.fr">CNRS</a>
<a href="http://www.inserm.fr/">INSERM</a>
<a href="http://www.cea.fr/">CEA</a>';

  $export['extra_links'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Institutions';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'institutions';
  $fe_block_boxes->body = '<a href="http://www.cnrs.fr"><img src="http://www.genopole.fr/IMG/png/cnrs.png" /></a>';

  $export['institutions'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Liens autres';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'other_links';
  $fe_block_boxes->body = '<a href="http://www.drupal.org">Drupal</a>
<a href="http://www.nauka-websites.com">Nauka Websites</a>
<a href="?q=user">Connexion</a>';

  $export['other_links'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Statistique Get Clicky';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'stats_clicky';
  $fe_block_boxes->body = '<script src="http://static.getclicky.com/js" type="text/javascript"></script>
<script type="text/javascript">try{ clicky.init(66531106); }catch(e){}</script>
<noscript><p><img alt="Clicky" width="1" height="1" src="http://in.getclicky.com/66531106ns.gif" /></p></noscript>
';

  $export['stats_clicky'] = $fe_block_boxes;

  return $export;
}

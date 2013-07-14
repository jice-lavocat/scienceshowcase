<?php
/**
 * @file
 * features_scienceshowcase_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function features_scienceshowcase_views_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'collaboration';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Collaboration';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Collaborations';
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Champ: Contenu : Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_website']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_website']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_website']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_website']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['field_api_classes'] = 0;
  /* Champ: Contenu : Contact person */
  $handler->display->display_options['fields']['field_person']['id'] = 'field_person';
  $handler->display->display_options['fields']['field_person']['table'] = 'field_data_field_person';
  $handler->display->display_options['fields']['field_person']['field'] = 'field_person';
  $handler->display->display_options['fields']['field_person']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_person']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_person']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_person']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_person']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_person']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_person']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_person']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_person']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_person']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_person']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_person']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_person']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_person']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_person']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_person']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_person']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_person']['field_api_classes'] = 0;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_website]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 1;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Champ: Global : Texte personnalisé */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_person]<br />[title]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 1;
  /* Champ: Contenu : City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_city']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_city']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_city']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_city']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_city']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_city']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_city']['field_api_classes'] = 0;
  /* Champ: Contenu : Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_logo']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_logo']['alter']['path'] = '[field_website]';
  $handler->display->display_options['fields']['field_logo']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['field_logo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_logo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_logo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_logo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_logo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_logo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_logo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_logo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_logo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_logo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_logo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_logo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_logo']['field_api_classes'] = 0;
  /* Critère de tri: Contenu : Contact person (field_person) */
  $handler->display->display_options['sorts']['field_person_value']['id'] = 'field_person_value';
  $handler->display->display_options['sorts']['field_person_value']['table'] = 'field_data_field_person';
  $handler->display->display_options['sorts']['field_person_value']['field'] = 'field_person_value';
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'collaboration' => 'collaboration',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'tab_collab';
  $handler->display->display_options['path'] = 'collaborations';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Collaborations';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['collaboration'] = array(
    t('Master'),
    t('Collaborations'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('Website'),
    t('Contact person'),
    t('Titre'),
    t('[field_website]'),
    t('[field_person]<br />[title]'),
    t('Page'),
  );
  $export['collaboration'] = $view;

  $view = new view;
  $view->name = 'news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Pied de page: Global : Zone de texte */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Champ: Contenu : Date de publication */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  /* Critère de tri: Contenu : Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'news';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Pied de page: Global : Zone de texte */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<a href="?q=news">Browse for more news...</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Champ: Contenu : Date de publication */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'F j, Y';
  $translatables['news'] = array(
    t('Master'),
    t('News'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('Date de publication'),
    t('Page'),
    t('Block'),
    t('<a href="?q=news">Browse for more news...</a>'),
  );
  $export['news'] = $view;

  $view = new view;
  $view->name = 'open_positions';
  $view->description = 'Views for Open Positions';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Open Positions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Open Positions';
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_skills' => 'field_skills',
    'field_stratingdate' => 'field_stratingdate',
  );
  $handler->display->display_options['style_options']['default'] = 'field_stratingdate';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_skills' => array(
      'align' => '',
      'separator' => '',
    ),
    'field_stratingdate' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Pied de page: Global : Zone de texte */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  /* Champ: Contenu : Job Type */
  $handler->display->display_options['fields']['field_jobtype']['id'] = 'field_jobtype';
  $handler->display->display_options['fields']['field_jobtype']['table'] = 'field_data_field_jobtype';
  $handler->display->display_options['fields']['field_jobtype']['field'] = 'field_jobtype';
  $handler->display->display_options['fields']['field_jobtype']['label'] = 'Position';
  $handler->display->display_options['fields']['field_jobtype']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_jobtype']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_jobtype']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_jobtype']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['field_api_classes'] = 0;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Champ: Contenu : Skills  */
  $handler->display->display_options['fields']['field_skills']['id'] = 'field_skills';
  $handler->display->display_options['fields']['field_skills']['table'] = 'field_data_field_skills';
  $handler->display->display_options['fields']['field_skills']['field'] = 'field_skills';
  /* Champ: Contenu : Starting Date */
  $handler->display->display_options['fields']['field_stratingdate']['id'] = 'field_stratingdate';
  $handler->display->display_options['fields']['field_stratingdate']['table'] = 'field_data_field_stratingdate';
  $handler->display->display_options['fields']['field_stratingdate']['field'] = 'field_stratingdate';
  /* Critère de tri: Contenu : Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'open_positions' => 'open_positions',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Job Type */
  $handler->display->display_options['fields']['field_jobtype']['id'] = 'field_jobtype';
  $handler->display->display_options['fields']['field_jobtype']['table'] = 'field_data_field_jobtype';
  $handler->display->display_options['fields']['field_jobtype']['field'] = 'field_jobtype';
  $handler->display->display_options['fields']['field_jobtype']['label'] = 'Position';
  $handler->display->display_options['fields']['field_jobtype']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_jobtype']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_jobtype']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_jobtype']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['field_api_classes'] = 0;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Champ: Contenu : Skills  */
  $handler->display->display_options['fields']['field_skills']['id'] = 'field_skills';
  $handler->display->display_options['fields']['field_skills']['table'] = 'field_data_field_skills';
  $handler->display->display_options['fields']['field_skills']['field'] = 'field_skills';
  $handler->display->display_options['fields']['field_skills']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_skills']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_skills']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_skills']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_skills']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_skills']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_skills']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_skills']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_skills']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_skills']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_skills']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_skills']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_skills']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_skills']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_skills']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_skills']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_skills']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_skills']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_skills']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_skills']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_skills']['field_api_classes'] = 0;
  /* Champ: Contenu : Starting Date */
  $handler->display->display_options['fields']['field_stratingdate']['id'] = 'field_stratingdate';
  $handler->display->display_options['fields']['field_stratingdate']['table'] = 'field_data_field_stratingdate';
  $handler->display->display_options['fields']['field_stratingdate']['field'] = 'field_stratingdate';
  $handler->display->display_options['fields']['field_stratingdate']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_stratingdate']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_stratingdate']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_stratingdate']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_stratingdate']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_stratingdate']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_stratingdate']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_stratingdate']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_stratingdate']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_stratingdate']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_stratingdate']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_stratingdate']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_stratingdate']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_stratingdate']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_stratingdate']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_stratingdate']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_stratingdate']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_stratingdate']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_stratingdate']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'open-positions';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Open Positions';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Open Positions */
  $handler = $view->new_display('block', 'Open Positions', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_jobtype' => 'field_jobtype',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
    ),
    'field_jobtype' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Pied de page: Global : Zone de texte */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<p><a href="?q=open-positions">Browse for more positions...</a></p>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Champ: Contenu : Job Type */
  $handler->display->display_options['fields']['field_jobtype']['id'] = 'field_jobtype';
  $handler->display->display_options['fields']['field_jobtype']['table'] = 'field_data_field_jobtype';
  $handler->display->display_options['fields']['field_jobtype']['field'] = 'field_jobtype';
  $handler->display->display_options['fields']['field_jobtype']['label'] = '';
  $handler->display->display_options['fields']['field_jobtype']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_jobtype']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_jobtype']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jobtype']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_jobtype']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_jobtype']['field_api_classes'] = 0;
  $translatables['open_positions'] = array(
    t('Master'),
    t('Open Positions'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('Position'),
    t('Skills '),
    t('Starting Date'),
    t('Page'),
    t('<p><a href="?q=open-positions">Browse for more positions...</a></p>'),
  );
  $export['open_positions'] = $view;

  $view = new view;
  $view->name = 'people';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'People';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Personnes';
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = 0;
  $handler->display->display_options['row_options']['comments'] = 0;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Champ: Contenu : Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Corps';
  /* Critère de tri: Contenu : Family Name (field_first_name) */
  $handler->display->display_options['sorts']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['sorts']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['sorts']['field_first_name_value']['field'] = 'field_first_name_value';
  /* Critère de tri: Contenu : Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filtre contextuel: Contenu : Related Authors (field_rel_authors) */
  $handler->display->display_options['arguments']['field_rel_authors_nid']['id'] = 'field_rel_authors_nid';
  $handler->display->display_options['arguments']['field_rel_authors_nid']['table'] = 'field_data_field_rel_authors';
  $handler->display->display_options['arguments']['field_rel_authors_nid']['field'] = 'field_rel_authors_nid';
  $handler->display->display_options['arguments']['field_rel_authors_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_rel_authors_nid']['summary']['format'] = 'default_summary';
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'permanent_researcher' => 'permanent_researcher',
  );
  /* Critère de filtrage: Traduction du contenu : Langue */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Group Leader */
  $handler = $view->new_display('panel_pane', 'Group Leader', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Group Leader';
  $handler->display->display_options['enabled'] = FALSE;

  /* Display: Permanent Researchers */
  $handler = $view->new_display('panel_pane', 'Permanent Researchers', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Permanent Researchers';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'permanent_researcher' => 'permanent_researcher',
  );
  /* Critère de filtrage: Contenu : Past Member (field_past_member) */
  $handler->display->display_options['filters']['field_past_member_value']['id'] = 'field_past_member_value';
  $handler->display->display_options['filters']['field_past_member_value']['table'] = 'field_data_field_past_member';
  $handler->display->display_options['filters']['field_past_member_value']['field'] = 'field_past_member_value';
  $handler->display->display_options['filters']['field_past_member_value']['value'] = array(
    'No' => 'No',
  );
  /* Critère de filtrage: Contenu : Position Type (field_position_type) */
  $handler->display->display_options['filters']['field_position_type_value']['id'] = 'field_position_type_value';
  $handler->display->display_options['filters']['field_position_type_value']['table'] = 'field_data_field_position_type';
  $handler->display->display_options['filters']['field_position_type_value']['field'] = 'field_position_type_value';
  $handler->display->display_options['filters']['field_position_type_value']['value'] = array(
    'Permanent Researcher' => 'Permanent Researcher',
  );
  /* Critère de filtrage: Traduction du contenu : Langue */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Post Docs */
  $handler = $view->new_display('panel_pane', 'Post Docs', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Post Docs';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'permanent_researcher' => 'permanent_researcher',
  );
  /* Critère de filtrage: Contenu : Past Member (field_past_member) */
  $handler->display->display_options['filters']['field_past_member_value']['id'] = 'field_past_member_value';
  $handler->display->display_options['filters']['field_past_member_value']['table'] = 'field_data_field_past_member';
  $handler->display->display_options['filters']['field_past_member_value']['field'] = 'field_past_member_value';
  $handler->display->display_options['filters']['field_past_member_value']['value'] = array(
    'No' => 'No',
  );
  /* Critère de filtrage: Contenu : Position Type (field_position_type) */
  $handler->display->display_options['filters']['field_position_type_value']['id'] = 'field_position_type_value';
  $handler->display->display_options['filters']['field_position_type_value']['table'] = 'field_data_field_position_type';
  $handler->display->display_options['filters']['field_position_type_value']['field'] = 'field_position_type_value';
  $handler->display->display_options['filters']['field_position_type_value']['value'] = array(
    'Post-Doc' => 'Post-Doc',
  );
  /* Critère de filtrage: Traduction du contenu : Langue */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Graduate Students */
  $handler = $view->new_display('panel_pane', 'Graduate Students', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Graduate Students';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'permanent_researcher' => 'permanent_researcher',
  );
  /* Critère de filtrage: Contenu : Past Member (field_past_member) */
  $handler->display->display_options['filters']['field_past_member_value']['id'] = 'field_past_member_value';
  $handler->display->display_options['filters']['field_past_member_value']['table'] = 'field_data_field_past_member';
  $handler->display->display_options['filters']['field_past_member_value']['field'] = 'field_past_member_value';
  $handler->display->display_options['filters']['field_past_member_value']['value'] = array(
    'No' => 'No',
  );
  /* Critère de filtrage: Contenu : Position Type (field_position_type) */
  $handler->display->display_options['filters']['field_position_type_value']['id'] = 'field_position_type_value';
  $handler->display->display_options['filters']['field_position_type_value']['table'] = 'field_data_field_position_type';
  $handler->display->display_options['filters']['field_position_type_value']['field'] = 'field_position_type_value';
  $handler->display->display_options['filters']['field_position_type_value']['value'] = array(
    'PhD Student' => 'PhD Student',
    'Master Student' => 'Master Student',
  );
  /* Critère de filtrage: Traduction du contenu : Langue */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Visitors */
  $handler = $view->new_display('panel_pane', 'Visitors', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Visiteurs';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'permanent_researcher' => 'permanent_researcher',
  );
  /* Critère de filtrage: Contenu : Past Member (field_past_member) */
  $handler->display->display_options['filters']['field_past_member_value']['id'] = 'field_past_member_value';
  $handler->display->display_options['filters']['field_past_member_value']['table'] = 'field_data_field_past_member';
  $handler->display->display_options['filters']['field_past_member_value']['field'] = 'field_past_member_value';
  $handler->display->display_options['filters']['field_past_member_value']['value'] = array(
    'No' => 'No',
  );
  /* Critère de filtrage: Contenu : Position Type (field_position_type) */
  $handler->display->display_options['filters']['field_position_type_value']['id'] = 'field_position_type_value';
  $handler->display->display_options['filters']['field_position_type_value']['table'] = 'field_data_field_position_type';
  $handler->display->display_options['filters']['field_position_type_value']['field'] = 'field_position_type_value';
  $handler->display->display_options['filters']['field_position_type_value']['value'] = array(
    'Visitor' => 'Visitor',
  );

  /* Display: Past Members */
  $handler = $view->new_display('panel_pane', 'Past Members', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Past Members';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'permanent_researcher' => 'permanent_researcher',
  );
  /* Critère de filtrage: Contenu : Past Member (field_past_member) */
  $handler->display->display_options['filters']['field_past_member_value']['id'] = 'field_past_member_value';
  $handler->display->display_options['filters']['field_past_member_value']['table'] = 'field_data_field_past_member';
  $handler->display->display_options['filters']['field_past_member_value']['field'] = 'field_past_member_value';
  $handler->display->display_options['filters']['field_past_member_value']['value'] = array(
    'Yes' => 'Yes',
  );
  /* Critère de filtrage: Traduction du contenu : Langue */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Attachment_Publi */
  $handler = $view->new_display('attachment', 'Attachment_Publi', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Publications';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'field_year';
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'body' => 'body',
    'title' => 'title',
    'field_journal' => 'field_journal',
    'field_pub_volume' => 'field_pub_volume',
    'field_year' => 'field_year',
    'field_pub_file' => 'field_pub_file',
  );
  $handler->display->display_options['row_options']['separator'] = ',';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Contenu : Related Authors (field_rel_authors) */
  $handler->display->display_options['relationships']['field_rel_authors_nid']['id'] = 'field_rel_authors_nid';
  $handler->display->display_options['relationships']['field_rel_authors_nid']['table'] = 'field_data_field_rel_authors';
  $handler->display->display_options['relationships']['field_rel_authors_nid']['field'] = 'field_rel_authors_nid';
  $handler->display->display_options['relationships']['field_rel_authors_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_rel_authors_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = 'span';
  $handler->display->display_options['fields']['body']['element_class'] = 'authors';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Champ: Contenu : Journal */
  $handler->display->display_options['fields']['field_journal']['id'] = 'field_journal';
  $handler->display->display_options['fields']['field_journal']['table'] = 'field_data_field_journal';
  $handler->display->display_options['fields']['field_journal']['field'] = 'field_journal';
  $handler->display->display_options['fields']['field_journal']['label'] = '';
  $handler->display->display_options['fields']['field_journal']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_journal']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_journal']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_journal']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_journal']['element_class'] = 'journal';
  $handler->display->display_options['fields']['field_journal']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_journal']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_journal']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_journal']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_journal']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_journal']['group_column'] = 'value';
  $handler->display->display_options['fields']['field_journal']['field_api_classes'] = 0;
  /* Champ: Contenu : Volume */
  $handler->display->display_options['fields']['field_pub_volume']['id'] = 'field_pub_volume';
  $handler->display->display_options['fields']['field_pub_volume']['table'] = 'field_data_field_pub_volume';
  $handler->display->display_options['fields']['field_pub_volume']['field'] = 'field_pub_volume';
  $handler->display->display_options['fields']['field_pub_volume']['label'] = '';
  $handler->display->display_options['fields']['field_pub_volume']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_pub_volume']['element_class'] = 'volume';
  $handler->display->display_options['fields']['field_pub_volume']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_volume']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['field_api_classes'] = 0;
  /* Champ: Contenu : Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['label'] = '';
  $handler->display->display_options['fields']['field_year']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_year']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_year']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_year']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_year']['element_class'] = 'year';
  $handler->display->display_options['fields']['field_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_year']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_year']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_year']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_year']['field_api_classes'] = 0;
  /* Champ: Contenu : File */
  $handler->display->display_options['fields']['field_pub_file']['id'] = 'field_pub_file';
  $handler->display->display_options['fields']['field_pub_file']['table'] = 'field_data_field_pub_file';
  $handler->display->display_options['fields']['field_pub_file']['field'] = 'field_pub_file';
  $handler->display->display_options['fields']['field_pub_file']['label'] = '';
  $handler->display->display_options['fields']['field_pub_file']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_pub_file']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_pub_file']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_pub_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_file']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pub_file']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Contenu : Year (field_year) */
  $handler->display->display_options['sorts']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['sorts']['field_year_value']['field'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_year_value']['expose']['label'] = 'Year (field_year)';
  /* Critère de tri: Contenu : Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Contenu : Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_rel_authors_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );
  $handler->display->display_options['displays'] = array(
    'panel_pane_1' => 'panel_pane_1',
    'panel_pane_2' => 'panel_pane_2',
    'panel_pane_3' => 'panel_pane_3',
    'panel_pane_4' => 'panel_pane_4',
    'panel_pane_5' => 'panel_pane_5',
    'panel_pane_6' => 'panel_pane_6',
    'default' => 0,
    'block_1' => 0,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Contenu : Related Authors (field_rel_authors) */
  $handler->display->display_options['arguments']['field_rel_authors_nid']['id'] = 'field_rel_authors_nid';
  $handler->display->display_options['arguments']['field_rel_authors_nid']['table'] = 'field_data_field_rel_authors';
  $handler->display->display_options['arguments']['field_rel_authors_nid']['field'] = 'field_rel_authors_nid';
  $handler->display->display_options['arguments']['field_rel_authors_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_rel_authors_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_rel_authors_nid']['default_argument_options']['argument'] = 'Diederik';
  $handler->display->display_options['arguments']['field_rel_authors_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_rel_authors_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_rel_authors_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_rel_authors_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_rel_authors_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_rel_authors_nid']['not'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );

  /* Display: Group Leader */
  $handler = $view->new_display('panel_pane', 'Group Leader', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Group Leader';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'permanent_researcher' => 'permanent_researcher',
  );
  /* Critère de filtrage: Contenu : Past Member (field_past_member) */
  $handler->display->display_options['filters']['field_past_member_value']['id'] = 'field_past_member_value';
  $handler->display->display_options['filters']['field_past_member_value']['table'] = 'field_data_field_past_member';
  $handler->display->display_options['filters']['field_past_member_value']['field'] = 'field_past_member_value';
  $handler->display->display_options['filters']['field_past_member_value']['value'] = array(
    'No' => 'No',
  );
  /* Critère de filtrage: Contenu : Position Type (field_position_type) */
  $handler->display->display_options['filters']['field_position_type_value']['id'] = 'field_position_type_value';
  $handler->display->display_options['filters']['field_position_type_value']['table'] = 'field_data_field_position_type';
  $handler->display->display_options['filters']['field_position_type_value']['field'] = 'field_position_type_value';
  $handler->display->display_options['filters']['field_position_type_value']['value'] = array(
    'Group Leader' => 'Group Leader',
  );
  /* Critère de filtrage: Traduction du contenu : Langue */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $translatables['people'] = array(
    t('Master'),
    t('Personnes'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('Corps'),
    t('Tous / Toutes'),
    t('Group Leader'),
    t('View panes'),
    t('Permanent Researchers'),
    t('Post Docs'),
    t('Graduate Students'),
    t('Visitors'),
    t('Visiteurs'),
    t('Past Members'),
    t('Attachment_Publi'),
    t('Publications'),
    t('field_rel_authors'),
    t('Year (field_year)'),
    t('Block'),
  );
  $export['people'] = $view;

  $view = new view;
  $view->name = 'publications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Publications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publications for this author';
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = 0;
  $handler->display->display_options['row_options']['comments'] = 0;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Champ: Contenu : Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Corps';
  /* Champ: Contenu : Journal */
  $handler->display->display_options['fields']['field_journal']['id'] = 'field_journal';
  $handler->display->display_options['fields']['field_journal']['table'] = 'field_data_field_journal';
  $handler->display->display_options['fields']['field_journal']['field'] = 'field_journal';
  /* Champ: Contenu : Volume */
  $handler->display->display_options['fields']['field_pub_volume']['id'] = 'field_pub_volume';
  $handler->display->display_options['fields']['field_pub_volume']['table'] = 'field_data_field_pub_volume';
  $handler->display->display_options['fields']['field_pub_volume']['field'] = 'field_pub_volume';
  /* Champ: Contenu : Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['label'] = 'Année';
  /* Critère de tri: Contenu : Year (field_year) */
  $handler->display->display_options['sorts']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['sorts']['field_year_value']['field'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['order'] = 'DESC';
  /* Critère de tri: Contenu : Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );
  /* Critère de filtrage: Contenu : Group Publication (field_group_publi) */
  $handler->display->display_options['filters']['field_group_publi_value']['id'] = 'field_group_publi_value';
  $handler->display->display_options['filters']['field_group_publi_value']['table'] = 'field_data_field_group_publi';
  $handler->display->display_options['filters']['field_group_publi_value']['field'] = 'field_group_publi_value';
  $handler->display->display_options['filters']['field_group_publi_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['relationship'] = 'field_rel_authors_nid';
  $handler->display->display_options['row_options']['links'] = 1;
  $handler->display->display_options['row_options']['comments'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Contenu : Related Authors (field_rel_authors) */
  $handler->display->display_options['relationships']['field_rel_authors_nid']['id'] = 'field_rel_authors_nid';
  $handler->display->display_options['relationships']['field_rel_authors_nid']['table'] = 'field_data_field_rel_authors';
  $handler->display->display_options['relationships']['field_rel_authors_nid']['field'] = 'field_rel_authors_nid';
  $handler->display->display_options['relationships']['field_rel_authors_nid']['required'] = 1;
  $handler->display->display_options['relationships']['field_rel_authors_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Contenu : Related Authors (field_rel_authors) */
  $handler->display->display_options['arguments']['field_rel_authors_nid']['id'] = 'field_rel_authors_nid';
  $handler->display->display_options['arguments']['field_rel_authors_nid']['table'] = 'field_data_field_rel_authors';
  $handler->display->display_options['arguments']['field_rel_authors_nid']['field'] = 'field_rel_authors_nid';
  $handler->display->display_options['arguments']['field_rel_authors_nid']['relationship'] = 'field_rel_authors_nid';
  $handler->display->display_options['arguments']['field_rel_authors_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_rel_authors_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_rel_authors_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_rel_authors_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_rel_authors_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_rel_authors_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_rel_authors_nid']['not'] = 0;

  /* Display: Content pane : Publi */
  $handler = $view->new_display('panel_pane', 'Content pane : Publi', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Publications in Journal';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'field_year';
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_journal' => 'field_journal',
    'field_pub_volume' => 'field_pub_volume',
    'field_year' => 'field_year',
  );
  $handler->display->display_options['row_options']['separator'] = ', ';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = 'span';
  $handler->display->display_options['fields']['body']['element_class'] = 'authors';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'titre';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Champ: Contenu : Journal */
  $handler->display->display_options['fields']['field_journal']['id'] = 'field_journal';
  $handler->display->display_options['fields']['field_journal']['table'] = 'field_data_field_journal';
  $handler->display->display_options['fields']['field_journal']['field'] = 'field_journal';
  $handler->display->display_options['fields']['field_journal']['label'] = '';
  $handler->display->display_options['fields']['field_journal']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_journal']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_journal']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_journal']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_journal']['element_class'] = 'journal';
  $handler->display->display_options['fields']['field_journal']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_journal']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_journal']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_journal']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_journal']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_journal']['field_api_classes'] = 0;
  /* Champ: Contenu : Volume */
  $handler->display->display_options['fields']['field_pub_volume']['id'] = 'field_pub_volume';
  $handler->display->display_options['fields']['field_pub_volume']['table'] = 'field_data_field_pub_volume';
  $handler->display->display_options['fields']['field_pub_volume']['field'] = 'field_pub_volume';
  $handler->display->display_options['fields']['field_pub_volume']['label'] = '';
  $handler->display->display_options['fields']['field_pub_volume']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_pub_volume']['element_class'] = 'volume';
  $handler->display->display_options['fields']['field_pub_volume']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_volume']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['field_api_classes'] = 0;
  /* Champ: Contenu : Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['label'] = '';
  $handler->display->display_options['fields']['field_year']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_year']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_year']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_year']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_year']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_year']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_year']['field_api_classes'] = 0;
  /* Champ: Contenu : URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_url']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_url']['element_class'] = 'publi_url';
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_url']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url']['type'] = 'link_short';
  $handler->display->display_options['fields']['field_url']['field_api_classes'] = 0;
  /* Champ: Contenu : File */
  $handler->display->display_options['fields']['field_pub_file']['id'] = 'field_pub_file';
  $handler->display->display_options['fields']['field_pub_file']['table'] = 'field_data_field_pub_file';
  $handler->display->display_options['fields']['field_pub_file']['field'] = 'field_pub_file';
  $handler->display->display_options['fields']['field_pub_file']['label'] = 'Téléchargement';
  $handler->display->display_options['fields']['field_pub_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pub_file']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_pub_file']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_pub_file']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_pub_file']['element_class'] = 'publi_downloa';
  $handler->display->display_options['fields']['field_pub_file']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_pub_file']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_pub_file']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pub_file']['field_api_classes'] = 0;
  /* Champ: Global : Texte personnalisé */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'More : [field_url] [field_pub_file]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 1;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;

  /* Display: Content pane : book */
  $handler = $view->new_display('panel_pane', 'Content pane : book', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Livres';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'field_year';
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_journal' => 'field_journal',
    'field_pub_volume' => 'field_pub_volume',
    'field_year' => 'field_year',
  );
  $handler->display->display_options['row_options']['separator'] = ', ';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = 'span';
  $handler->display->display_options['fields']['body']['element_class'] = 'authors';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'titre';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Champ: Contenu : Journal */
  $handler->display->display_options['fields']['field_journal']['id'] = 'field_journal';
  $handler->display->display_options['fields']['field_journal']['table'] = 'field_data_field_journal';
  $handler->display->display_options['fields']['field_journal']['field'] = 'field_journal';
  $handler->display->display_options['fields']['field_journal']['label'] = '';
  $handler->display->display_options['fields']['field_journal']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_journal']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_journal']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_journal']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_journal']['element_class'] = 'journal';
  $handler->display->display_options['fields']['field_journal']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_journal']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_journal']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_journal']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_journal']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_journal']['field_api_classes'] = 0;
  /* Champ: Contenu : Volume */
  $handler->display->display_options['fields']['field_pub_volume']['id'] = 'field_pub_volume';
  $handler->display->display_options['fields']['field_pub_volume']['table'] = 'field_data_field_pub_volume';
  $handler->display->display_options['fields']['field_pub_volume']['field'] = 'field_pub_volume';
  $handler->display->display_options['fields']['field_pub_volume']['label'] = '';
  $handler->display->display_options['fields']['field_pub_volume']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_pub_volume']['element_class'] = 'volume';
  $handler->display->display_options['fields']['field_pub_volume']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_volume']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['field_api_classes'] = 0;
  /* Champ: Contenu : Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['label'] = '';
  $handler->display->display_options['fields']['field_year']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_year']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_year']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_year']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_year']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_year']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_year']['field_api_classes'] = 0;
  /* Champ: Contenu : URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_url']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_url']['element_class'] = 'publi_url';
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_url']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url']['type'] = 'link_short';
  $handler->display->display_options['fields']['field_url']['field_api_classes'] = 0;
  /* Champ: Contenu : File */
  $handler->display->display_options['fields']['field_pub_file']['id'] = 'field_pub_file';
  $handler->display->display_options['fields']['field_pub_file']['table'] = 'field_data_field_pub_file';
  $handler->display->display_options['fields']['field_pub_file']['field'] = 'field_pub_file';
  $handler->display->display_options['fields']['field_pub_file']['label'] = 'Téléchargement';
  $handler->display->display_options['fields']['field_pub_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pub_file']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_pub_file']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_pub_file']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_pub_file']['element_class'] = 'publi_downloa';
  $handler->display->display_options['fields']['field_pub_file']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_pub_file']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_pub_file']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pub_file']['field_api_classes'] = 0;
  /* Champ: Global : Texte personnalisé */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'More : [field_url]  [field_pub_file]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 1;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );
  /* Critère de filtrage: Contenu : Publication Type (field_pub_type) */
  $handler->display->display_options['filters']['field_pub_type_value']['id'] = 'field_pub_type_value';
  $handler->display->display_options['filters']['field_pub_type_value']['table'] = 'field_data_field_pub_type';
  $handler->display->display_options['filters']['field_pub_type_value']['field'] = 'field_pub_type_value';
  $handler->display->display_options['filters']['field_pub_type_value']['value'] = array(
    'Book' => 'Book',
  );
  /* Critère de filtrage: Contenu : Group Publication (field_group_publi) */
  $handler->display->display_options['filters']['field_group_publi_value_1']['id'] = 'field_group_publi_value_1';
  $handler->display->display_options['filters']['field_group_publi_value_1']['table'] = 'field_data_field_group_publi';
  $handler->display->display_options['filters']['field_group_publi_value_1']['field'] = 'field_group_publi_value';
  $handler->display->display_options['filters']['field_group_publi_value_1']['value'] = array(
    1 => '1',
  );

  /* Display: Content pane : proceeding */
  $handler = $view->new_display('panel_pane', 'Content pane : proceeding', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Proceedings';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'field_year';
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_journal' => 'field_journal',
    'field_pub_volume' => 'field_pub_volume',
    'field_year' => 'field_year',
  );
  $handler->display->display_options['row_options']['separator'] = ', ';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = 'span';
  $handler->display->display_options['fields']['body']['element_class'] = 'authors';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'titre';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Champ: Contenu : Journal */
  $handler->display->display_options['fields']['field_journal']['id'] = 'field_journal';
  $handler->display->display_options['fields']['field_journal']['table'] = 'field_data_field_journal';
  $handler->display->display_options['fields']['field_journal']['field'] = 'field_journal';
  $handler->display->display_options['fields']['field_journal']['label'] = '';
  $handler->display->display_options['fields']['field_journal']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_journal']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_journal']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_journal']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_journal']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_journal']['element_class'] = 'journal';
  $handler->display->display_options['fields']['field_journal']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_journal']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_journal']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_journal']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_journal']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_journal']['field_api_classes'] = 0;
  /* Champ: Contenu : Volume */
  $handler->display->display_options['fields']['field_pub_volume']['id'] = 'field_pub_volume';
  $handler->display->display_options['fields']['field_pub_volume']['table'] = 'field_data_field_pub_volume';
  $handler->display->display_options['fields']['field_pub_volume']['field'] = 'field_pub_volume';
  $handler->display->display_options['fields']['field_pub_volume']['label'] = '';
  $handler->display->display_options['fields']['field_pub_volume']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_pub_volume']['element_class'] = 'volume';
  $handler->display->display_options['fields']['field_pub_volume']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_volume']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_pub_volume']['field_api_classes'] = 0;
  /* Champ: Contenu : Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['label'] = '';
  $handler->display->display_options['fields']['field_year']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_year']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_year']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_year']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_year']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_year']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_year']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_year']['field_api_classes'] = 0;
  /* Champ: Contenu : URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_url']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_url']['element_class'] = 'publi_url';
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_url']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url']['type'] = 'link_short';
  $handler->display->display_options['fields']['field_url']['field_api_classes'] = 0;
  /* Champ: Contenu : File */
  $handler->display->display_options['fields']['field_pub_file']['id'] = 'field_pub_file';
  $handler->display->display_options['fields']['field_pub_file']['table'] = 'field_data_field_pub_file';
  $handler->display->display_options['fields']['field_pub_file']['field'] = 'field_pub_file';
  $handler->display->display_options['fields']['field_pub_file']['label'] = 'Téléchargement';
  $handler->display->display_options['fields']['field_pub_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pub_file']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_pub_file']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_pub_file']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_pub_file']['element_class'] = 'publi_downloa';
  $handler->display->display_options['fields']['field_pub_file']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_pub_file']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_pub_file']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_pub_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pub_file']['field_api_classes'] = 0;
  /* Champ: Global : Texte personnalisé */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'More : [field_url]  [field_pub_file]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 1;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );
  /* Critère de filtrage: Contenu : Publication Type (field_pub_type) */
  $handler->display->display_options['filters']['field_pub_type_value']['id'] = 'field_pub_type_value';
  $handler->display->display_options['filters']['field_pub_type_value']['table'] = 'field_data_field_pub_type';
  $handler->display->display_options['filters']['field_pub_type_value']['field'] = 'field_pub_type_value';
  $handler->display->display_options['filters']['field_pub_type_value']['value'] = array(
    'Proceeding' => 'Proceeding',
  );
  $translatables['publications'] = array(
    t('Master'),
    t('Publications for this author'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('Corps'),
    t('Journal'),
    t('Volume'),
    t('Année'),
    t('Block'),
    t('field_rel_authors'),
    t('Tous / Toutes'),
    t('Content pane : Publi'),
    t('Publications in Journal'),
    t('Téléchargement'),
    t('More : [field_url] [field_pub_file]'),
    t('View panes'),
    t('Content pane : book'),
    t('Livres'),
    t('More : [field_url]  [field_pub_file]'),
    t('Content pane : proceeding'),
    t('Proceedings'),
  );
  $export['publications'] = $view;

  $view = new view;
  $view->name = 'research_topic';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Research Topic';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Research Topic';
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Champ: Contenu : image_research */
  $handler->display->display_options['fields']['field_img_research']['id'] = 'field_img_research';
  $handler->display->display_options['fields']['field_img_research']['table'] = 'field_data_field_img_research';
  $handler->display->display_options['fields']['field_img_research']['field'] = 'field_img_research';
  /* Critère de tri: Contenu : Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filtre contextuel: Contenu : Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'research_interest' => 'research_interest',
  );
  /* Critère de filtrage: Traduction du contenu : Langue */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = 1;
  $handler->display->display_options['row_options']['comments'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Champ: Contenu : image_research */
  $handler->display->display_options['fields']['field_img_research']['id'] = 'field_img_research';
  $handler->display->display_options['fields']['field_img_research']['table'] = 'field_data_field_img_research';
  $handler->display->display_options['fields']['field_img_research']['field'] = 'field_img_research';
  $handler->display->display_options['fields']['field_img_research']['label'] = '';
  $handler->display->display_options['fields']['field_img_research']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_img_research']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_img_research']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_img_research']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_img_research']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_img_research']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_img_research']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_img_research']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_img_research']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_img_research']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_img_research']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_img_research']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_img_research']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_img_research']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_img_research']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_img_research']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_img_research']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_img_research']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_img_research']['settings'] = array(
    'image_style' => 'thumb_research',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_img_research']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Contenu : Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['path'] = 'research-topic';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Research Topic';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_publist' => 'field_publist',
  );
  $handler->display->display_options['row_options']['separator'] = '<br />';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'research_interest' => 'research_interest',
  );

  /* Display: ResearcTop_Relpubli */
  $handler = $view->new_display('attachment', 'ResearcTop_Relpubli', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'The relative publications of Research Topic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Related Publication */
  $handler->display->display_options['fields']['field_rel_publication']['id'] = 'field_rel_publication';
  $handler->display->display_options['fields']['field_rel_publication']['table'] = 'field_data_field_rel_publication';
  $handler->display->display_options['fields']['field_rel_publication']['field'] = 'field_rel_publication';
  $handler->display->display_options['fields']['field_rel_publication']['label'] = '';
  $handler->display->display_options['fields']['field_rel_publication']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_rel_publication']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_rel_publication']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_rel_publication']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_rel_publication']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_rel_publication']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_rel_publication']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_rel_publication']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_rel_publication']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_rel_publication']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_rel_publication']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_rel_publication']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_rel_publication']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rel_publication']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_rel_publication']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_rel_publication']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_rel_publication']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_rel_publication']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_rel_publication']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_rel_publication']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_rel_publication']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_rel_publication']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Contenu : Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
    'research_interest' => 'research_interest',
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block_1' => 0,
  );

  /* Display: Topics Slideshow */
  $handler = $view->new_display('block', 'Topics Slideshow', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_img_research' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_img_research' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollUp';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_img_research' => 'field_img_research',
    'title' => 'title',
    'body' => 'body',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : image_research */
  $handler->display->display_options['fields']['field_img_research']['id'] = 'field_img_research';
  $handler->display->display_options['fields']['field_img_research']['table'] = 'field_data_field_img_research';
  $handler->display->display_options['fields']['field_img_research']['field'] = 'field_img_research';
  $handler->display->display_options['fields']['field_img_research']['label'] = '';
  $handler->display->display_options['fields']['field_img_research']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_img_research']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_img_research']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_img_research']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_img_research']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_img_research']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_img_research']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_img_research']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_img_research']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_img_research']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_img_research']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_img_research']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_img_research']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_img_research']['element_class'] = 'slide_research_image';
  $handler->display->display_options['fields']['field_img_research']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_img_research']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_img_research']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_img_research']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_img_research']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_img_research']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_img_research']['settings'] = array(
    'image_style' => 'thumb_research',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_img_research']['field_api_classes'] = 0;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'slide_research_title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Champ: Contenu : Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'slide_research_descr';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $translatables['research_topic'] = array(
    t('Master'),
    t('Research Topic'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('Titre'),
    t('image_research'),
    t('Tous / Toutes'),
    t('Page'),
    t('Block'),
    t('ResearcTop_Relpubli'),
    t('The relative publications of Research Topic'),
    t('Topics Slideshow'),
  );
  $export['research_topic'] = $view;

  return $export;
}

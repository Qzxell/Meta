---
database-plugin: basic
---

```yaml:dbfolder
name: Metacognition
description: Data base of problmes of progamming competitice
columns:
  __file__:
    key: __file__
    id: __file__
    input: markdown
    label: File
    accessorKey: __file__
    isMetadata: true
    skipPersist: false
    isDragDisabled: false
    csvCandidate: true
    position: 1
    isHidden: false
    sortIndex: -1
    config:
      enable_media_view: true
      link_alias_enabled: true
      media_width: 100
      media_height: 100
      isInline: true
      task_hide_completed: true
      footer_type: none
      persist_changes: false
  Dificultad:
    input: number
    accessorKey: Dificultad
    key: Dificultad
    id: Dificultad
    label: Dificultad
    position: 2
    skipPersist: false
    isHidden: false
    sortIndex: -1
    width: 100
    config:
      enable_media_view: true
      link_alias_enabled: true
      media_width: 100
      media_height: 100
      isInline: false
      task_hide_completed: true
      footer_type: none
      persist_changes: false
  newColumn2:
    input: select
    accessorKey: newColumn2
    key: newColumn2
    id: newColumn2
    label: Estado
    position: 3
    skipPersist: false
    isHidden: false
    sortIndex: -1
    options:
      - { label: "Solved", value: "Solved", color: "hsl(98, 95%, 90%)"}
      - { label: "NoSolved", value: "NoSolved", color: "hsl(198, 95%, 90%)"}
    config:
      enable_media_view: true
      link_alias_enabled: true
      media_width: 100
      media_height: 100
      isInline: false
      task_hide_completed: true
      footer_type: none
      persist_changes: false
  Topics:
    input: tags
    accessorKey: Topics
    key: Topics
    id: Topics
    label: Topics
    position: 4
    skipPersist: false
    isHidden: false
    sortIndex: -1
    width: 193
    options:
      - { label: "Strings", value: "Strings", color: "hsl(196, 95%, 90%)"}
      - { label: "Math", value: "Math", color: "hsl(121, 95%, 90%)"}
      - { label: "Sortings", value: "Sortings", color: "hsl(46, 95%, 90%)"}
      - { label: "Geometry", value: "Geometry", color: "hsl(349, 95%, 90%)"}
      - { label: "BitMask", value: "BitMask", color: "hsl(16, 95%, 90%)"}
      - { label: "greedy", value: "greedy", color: "hsl(171, 95%, 90%)"}
      - { label: "Busqueda Binaria", value: "Busqueda Binaria", color: "hsl(177, 95%, 90%)"}
      - { label: "Implementacion", value: "Implementacion", color: "hsl(57, 95%, 90%)"}
      - { label: "Force Brute", value: "Force Brute", color: "hsl(83, 95%, 90%)"}
      - { label: "Number Theory", value: "Number Theory", color: "hsl(112, 95%, 90%)"}
    config:
      enable_media_view: true
      link_alias_enabled: true
      media_width: 100
      media_height: 100
      isInline: false
      task_hide_completed: true
      footer_type: none
      persist_changes: false
  Metacognicion:
    input: text
    accessorKey: Metacognicion
    key: Metacognicion
    id: Metacognicion
    label: Metacognicion
    position: 8
    skipPersist: false
    isHidden: false
    sortIndex: -1
    width: 220
    config:
      enable_media_view: true
      link_alias_enabled: true
      media_width: 100
      media_height: 100
      isInline: false
      task_hide_completed: true
      footer_type: none
      persist_changes: false
  Analisis:
    input: text
    accessorKey: Analisis
    key: Analisis
    id: Analisis
    label: Ideas
    position: 6
    skipPersist: false
    isHidden: false
    sortIndex: -1
    width: 483
    config:
      enable_media_view: true
      link_alias_enabled: true
      media_width: 100
      media_height: 100
      isInline: false
      task_hide_completed: true
      footer_type: none
      persist_changes: false
  Apredizaje:
    input: text
    accessorKey: Apredizaje
    key: Apredizaje
    id: Apredizaje
    label: A tener en cuenta a FUTURO
    position: 7
    skipPersist: false
    isHidden: false
    sortIndex: -1
    width: 308
    config:
      enable_media_view: true
      link_alias_enabled: true
      media_width: 100
      media_height: 100
      isInline: false
      task_hide_completed: true
      footer_type: none
      persist_changes: false
  newColumn7:
    input: select
    accessorKey: newColumn7
    key: newColumn7
    id: newColumn7
    label: Volver a resolver
    position: 5
    skipPersist: false
    isHidden: false
    sortIndex: -1
    width: 175
    options:
      - { label: "YES", value: "YES", color: "hsl(157,68%,44%)"}
      - { label: "NO", value: "NO", color: "hsl(0,76%,43%)"}
    config:
      enable_media_view: true
      link_alias_enabled: true
      media_width: 100
      media_height: 100
      isInline: false
      task_hide_completed: true
      footer_type: none
      persist_changes: false
      option_source: manual
config:
  remove_field_when_delete_column: false
  cell_size: normal
  sticky_first_column: false
  group_folder_column: 
  remove_empty_folders: false
  automatically_group_files: false
  hoist_files_with_empty_attributes: true
  show_metadata_created: false
  show_metadata_modified: false
  show_metadata_tasks: false
  show_metadata_inlinks: false
  show_metadata_outlinks: false
  show_metadata_tags: false
  source_data: current_folder
  source_form_result: 
  source_destination_path: /
  row_templates_folder: /
  current_row_template: 
  pagination_size: 70
  font_size: 16
  enable_js_formulas: false
  formula_folder_path: /
  inline_default: false
  inline_new_position: last_field
  date_format: yyyy-MM-dd
  datetime_format: "yyyy-MM-dd HH:mm:ss"
  metadata_date_format: "yyyy-MM-dd HH:mm:ss"
  enable_footer: false
  implementation: default
filters:
  enabled: false
  conditions:
```
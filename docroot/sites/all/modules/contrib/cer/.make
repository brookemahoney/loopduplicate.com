core = 7.x

api = 2
projects[] = "drupal"
; Modules
projects[] = "admin_menu"
projects[] = "commerce"
projects[] = "ctools"
projects[] = "devel"
projects[] = "elements"
projects[entity][version] = "1.x-dev"
projects[] = "entityreference"
projects[] = "features"
projects[field_collection][version] = "1.x-dev"
# Prevents bugs resulting from revision_id being NULL when creating a field
# collection implicitly.
projects[field_collection][patch][] = "http://www.drupal.org/files/1937866-field_collection-metadata-setter.patch"
projects[] = "profile2"
projects[] = "references"
projects[] = "views"

projects[cer][download][type] = "git"
projects[cer][download][url] = "http://git.drupal.org/project/cer.git"
projects[cer][download][branch] = "7.x-3.x"

#
# Be sure to run `pod lib lint MMDeviceKit.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'MMDeviceKit'
  s.version          = '0.2.0'
  s.summary          = 'MiaoBao SDK of MMDeviceKit.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/PaperangTeam/MMDeviceKit'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Theodore' => 'hoho.qiu@paperang.com' }
  s.source           = { :git => 'https://github.com/PaperangTeam/MMDeviceKit.git', :tag => s.version.to_s }
  #s.source = { :http => 'https://mb-ios.paperang.com/framework/sdk.zip' }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

   s.ios.deployment_target = '9.0'
  s.static_framework = true
  s.swift_version = '5'
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64', 'ENABLE_BITCODE' => 'NO' }

  s.source_files = 'MMDeviceKit.framework/Headers/*'
  s.ios.vendored_frameworks = ['MMDeviceKit.framework']
  #s.source_files = ''
  #s.public_header_files = 'MMDeviceKit/**/*.h'
  #s.ios.vendored_libraries = ['MMDeviceKit/libMMDeviceKit.a']

  s.dependency 'ImageLib'
end

#
# Be sure to run `pod lib lint LinKingEnSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'LinKingEnSDK'
  s.version          = '0.1.26'
  s.summary          = 'LinKingEnSDK Overseas version'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO:  LinKingSDK is Overseas SDK Quick Integration Solution.
                       DESC

  s.homepage         = 'https://github.com/MrDML/LinKingEnSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'leaon' => 'leaon' }
  s.source           = { :git => 'https://github.com/MrDML/LinKingEnSDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'

  s.static_framework = true

    
  s.vendored_frameworks = "LinKingEnSDK/Products/LinKingEnSDK.framework"
  s.resources = "LinKingEnSDK/Assets/*.*"
  s.dependency 'GoogleSignIn', '~> 5.0.2'
  s.dependency 'Firebase/Auth', '~> 4.0.3'
  s.dependency 'FBSDKLoginKit', '~> 9.0.1'
  s.dependency 'FBSDKShareKit', '~> 9.0.1'
  s.dependency 'AppsFlyerFramework', '~> 6.1.4'
  s.dependency 'SDWebImage', '>= 5.0.0'
  s.dependency 'Toast', '~> 4.0.0'
  s.dependency 'FBAudienceNetwork', '~> 6.3.0'
  s.dependency 'IronSourceSDK','7.1.1.0'
  s.dependency 'IronSourceAdMobAdapter','4.3.19.1'
  s.dependency 'IronSourcePangleAdapter','4.3.0.2'
  s.xcconfig = {
      'VALID_ARCHS' =>  'arm64 x86_64 armv7',
  }
  
  
  # s.resource_bundles = {
  #   'LinKingEnSDK' => ['LinKingEnSDK/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end

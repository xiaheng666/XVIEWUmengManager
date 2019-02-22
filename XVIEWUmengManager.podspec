#
# Be sure to run `pod lib lint XVIEWUmengManager.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'XVIEWUmengManager'
  s.version          = '0.1.1'
  s.summary          = 'Umeng库'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/xiaheng666/XVIEWUmengManager'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'xiaheng666' => 'key@xiaheng.net' }
  s.source           = { :git => 'git@github.com:xiaheng666/XVIEWUmengManager.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'XVIEWUmengManager/Classes/*.h'
  
  s.ios.vendored_libraries = 'XVIEWUmengManager/Classes/*.a'
  
  s.dependency 'UMCCommon','~> 1.5.3'
  
  #s.default_subspec = 'XVIEWAnalyzeManager'
  # s.resource_bundles = {
  #   'XVIEWUmengManager' => ['XVIEWUmengManager/Assets/*.png']
  # }
  
  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
  s.subspec 'XVIEWPushManager' do |ss|
      ss.source_files = 'XVIEWUmengManager/Classes/XVIEWPushManager/*.h','XVIEWUmengManager/Classes/*.h'
      ss.ios.vendored_libraries = 'XVIEWUmengManager/Classes/XVIEWPushManager/*.a','XVIEWUmengManager/Classes/*.a'
      ss.dependency 'UMCCommon','~> 1.5.3'
      ss.dependency 'UMCPush','~> 3.2.3'
  end
  s.subspec 'XVIEWAnalyzeManager' do |ss|
      ss.source_files = 'XVIEWUmengManager/Classes/XVIEWAnalyzeManager/*.h','XVIEWUmengManager/Classes/*.h'
      ss.ios.vendored_libraries = 'XVIEWUmengManager/Classes/XVIEWAnalyzeManager/*.a','XVIEWUmengManager/Classes/*.a'
      ss.dependency 'UMCCommon','~> 1.5.3'
      ss.dependency 'UMCAnalytics','~> 5.5.2'
  end
  s.subspec 'Share' do |ss|
      ss.source_files = 'XVIEWUmengManager/Classes/XVIEWShareManager/*.h'
      ss.ios.vendored_libraries = 'XVIEWUmengManager/Classes/XVIEWShareManager/*.a'
      ss.subspec 'XVIEWTencentManager' do |sss|
          ss.source_files = 'XVIEWUmengManager/Classes/XVIEWShareManager/XVIEWTencentManager/*.h'
          ss.ios.vendored_libraries = 'XVIEWUmengManager/Classes/XVIEWShareManager/XVIEWTencentManager/*.a'
          ss.dependency 'UMCCommon','~> 1.5.3'
          ss.dependency 'TencentOpenApiSDK', '~> 2.9.5'
          ss.dependency 'UMCShare/Social/ReducedQQ'
      end
      ss.subspec 'XVIEWWeChatManager' do |sss|
          ss.source_files = 'XVIEWUmengManager/Classes/XVIEWShareManager/XVIEWWeChatManager/*.h'
          ss.ios.vendored_libraries = 'XVIEWUmengManager/Classes/XVIEWShareManager/XVIEWWeChatManager/*.a'
          ss.dependency 'UMCCommon','~> 1.5.3'
          ss.dependency 'WechatOpenSDK','~>1.8.3'
          ss.dependency 'UMCShare/Social/ReducedWeChat'
      end
      ss.subspec 'XVIEWWeiboManager' do |sss|
          ss.source_files = 'XVIEWUmengManager/Classes/XVIEWShareManager/XVIEWWeiboManager/*.h'
          ss.ios.vendored_libraries = 'XVIEWUmengManager/Classes/XVIEWShareManager/XVIEWWeiboManager/*.a'
          ss.dependency 'UMCCommon','~> 1.5.3'
          ss.dependency 'UMCShare/Social/ReducedSina'
      end
      ss.subspec 'XVIEWAliManager' do |sss|
          ss.source_files = 'XVIEWUmengManager/Classes/XVIEWShareManager/XVIEWAliManager/*.h'
          ss.ios.vendored_libraries = 'XVIEWUmengManager/Classes/XVIEWShareManager/XVIEWAliManager/*.a'
          ss.dependency 'UMCCommon','~> 1.5.3'
          ss.dependency 'AlipaySDK-iOS'
          ss.dependency 'UMCShare/Social/AlipayShare'
      end
  end
end

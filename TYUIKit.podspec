Pod::Spec.new do |s|
  s.name             = 'TYUIKit'

  s.version          = '1.0.0'

  s.summary          = 'UI Kit Powered By TuyaInc'
  s.homepage         = 'https://github.com/TuyaInc/TYUIKit'
  s.author           = { 'TuyaInc' => 'https://www.tuya.com' }
  s.license          = 'None'
  s.source           = { :git => 'https://github.com/TuyaInc/TYUIKit.git', :tag => s.version.to_s }

  s.ios.deployment_target = '9.0'

  s.frameworks = 'UIKit', 'Foundation', 'CoreGraphics', 'QuartzCore', 'ImageIO', 'MobileCoreServices', 'Accelerate'

  s.source_files = 'TYUIKit/Headers/**/*'
  s.vendored_library = 'TYUIKit/libTYUIKit.a'

  
end

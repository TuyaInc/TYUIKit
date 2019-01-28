Pod::Spec.new do |s|
  s.name             = 'TYUIKit'
  s.version          = '0.0.2'
  s.summary          = 'UIKit From Tuya'
  s.homepage         = 'https://github.com/TuyaInc/TYUIKit'
  s.author           = { 'TuyaInc' => 'https://www.tuya.com' }
  s.source           = { :git => 'https://github.com/TuyaInc/TYUIKit.git', :tag => s.version.to_s }

  s.ios.deployment_target = '8.0'

  s.frameworks = 'UIKit', 'Foundation', 'CoreGraphics', 'QuartzCore', 'ImageIO', 'MobileCoreServices', 'Accelerate'

  s.source_files = 'TYUIKit/Headers/**/*'
  s.vendored_library = 'TYUIKit/libTYUIKit.a'

  
end

Pod::Spec.new do |s|
  s.name             = 'TYUIKit'
  s.version          = '0.0.1-rc.1'
  s.summary          = 'TYUIKit'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.homepage         = 'https://github.com/TuyaInc/TYUIKit'
  s.author           = { 'TuyaInc' => 'www.tuya.com' }
  s.source           = { :git => 'https://github.com/TuyaInc/TYUIKit.git', :tag => s.version.to_s }

  s.ios.deployment_target = '8.0'

  s.source_files = 'TYUIKit/Classes/**/*'

end

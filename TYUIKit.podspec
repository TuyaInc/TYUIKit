Pod::Spec.new do |s|
  s.name             = 'TYUIKit'
  s.version          = '0.0.1'
  s.summary          = 'A short description of TYUIKit.'

  s.homepage         = 'https://github.com/TuyaInc/TYUIKit'
  s.author           = { 'TuyaInc' => 'www.tuya.com' }
  s.source           = { :git => 'https://github.com/TuyaInc/TYUIKit.git', :commit => '0cd00fc9aa6f927cb2b4138b85fa69c0e5c5555f' }

  s.ios.deployment_target = '8.0'

  s.source_files = 'TYUIKit/Classes/**/*'

end

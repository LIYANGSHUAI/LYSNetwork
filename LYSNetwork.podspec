Pod::Spec.new do |s|
s.name         = "LYSNetwork"
s.version      = "0.0.1"
s.summary      = "对AFNetworking进行简单的封装"
s.description  = <<-DESC
对AFNetworking进行简单的封装
对AFNetworking进行简单的封装
DESC
s.homepage     = "https://github.com/LIYANGSHUAI/LYSNetwork"
s.platform       = :ios
s.license      = "MIT"
s.author             = { "LIYANGSHUAI" => "liyangshuai163@163.com" }
s.source       = { :git => "https://github.com/LIYANGSHUAI/LYSNetwork.git", :tag => "0.0.1" }
s.source_files  = "LYSNetwork/*.{h,m}"
s.dependency "AFNetworking", "~> 3.2.1"
end

/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSBundle, UIImage;

@interface PSLazyImagePromise : NSObject {

	NSString* _imagePath;
	NSString* _imageName;
	NSBundle* _imageBundle;
	/*^block*/id _loadBlock;
	UIImage* _image;
	BOOL _imageLoaded;

}

@property (nonatomic,readonly) UIImage * image; 
@property (getter=isImageLoaded,nonatomic,readonly) BOOL imageLoaded;              //@synthesize imageLoaded=_imageLoaded - In the implementation block
+(id)imagePromiseWithImageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)imagePromiseWithImagePath:(id)arg1 ;
+(id)imagePromiseWithLoadBlock:(/*^block*/id)arg1 ;
-(UIImage *)image;
-(void)loadImage;
-(BOOL)isImageLoaded;
@end


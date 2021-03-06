/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:41 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class NSURL, UIImage;

@interface _WKFileUploadItem : NSObject {

	RetainPtr<NSURL>* _fileURL;

}

@property (getter=isVideo,nonatomic,readonly) BOOL video; 
@property (nonatomic,readonly) NSURL * fileURL; 
@property (nonatomic,readonly) UIImage * displayImage; 
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(UIImage *)displayImage;
-(BOOL)isVideo;
@end


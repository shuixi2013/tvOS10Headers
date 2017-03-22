/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface WKPreviewElementInfo : NSObject <NSCopying> {

	RetainPtr<NSURL>* _linkURL;

}

@property (nonatomic,readonly) NSURL * linkURL; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithLinkURL:(id)arg1 ;
-(NSURL *)linkURL;
@end


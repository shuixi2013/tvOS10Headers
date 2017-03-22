/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface WKBrowsingContextHandle : NSObject <NSSecureCoding> {

	unsigned long long _pageID;

}

@property (getter=_pageID,nonatomic,readonly) unsigned long long pageID;              //@synthesize pageID=_pageID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)_pageID;
-(id)_initWithPageID:(unsigned long long)arg1 ;
@end


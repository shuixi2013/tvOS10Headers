/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVSearchServices.framework/TVSearchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface TVSSRelatedContentQuery : NSObject <NSSecureCoding> {

	NSString* _title;
	NSURL* _URL;

}

@property (nonatomic,copy) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSURL * URL;                   //@synthesize URL=_URL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
@end


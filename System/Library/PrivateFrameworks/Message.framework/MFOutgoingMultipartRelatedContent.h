/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:10 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFOutgoingRichtextMessageContent.h>

@class NSString;

@interface MFOutgoingMultipartRelatedContent : MFOutgoingRichtextMessageContent {

	NSString* _htmlBody;

}

@property (nonatomic,retain) NSString * htmlBody;              //@synthesize htmlBody=_htmlBody - In the implementation block
-(void)dealloc;
-(id)copy;
-(id)multipartContent;
-(void)setHtmlBody:(NSString *)arg1 ;
-(NSString *)htmlBody;
@end


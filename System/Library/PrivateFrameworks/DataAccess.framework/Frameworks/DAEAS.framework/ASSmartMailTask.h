/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASSendMailTask.h>

@class NSString;

@interface ASSmartMailTask : ASSendMailTask {

	int _messageType;
	NSString* _originalMessageId;
	NSString* _instanceId;
	NSString* _originalFolderId;
	NSString* _originalLongId;
	BOOL _retryWithoutReferences;
	BOOL _replaceMime;

}
-(id)contentType;
-(id)command;
-(int)commandCode;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(id)parameterData;
-(id)initWithMessage:(id)arg1 messageID:(id)arg2 messageType:(int)arg3 originalMessageID:(id)arg4 instanceId:(id)arg5 originalFolderID:(id)arg6 originalLongID:(id)arg7 replaceMime:(BOOL)arg8 ;
-(void)handleTopLevelErrorStatus:(id)arg1 ;
-(id)requestBodyStreamOutKnownSize:(int*)arg1 ;
@end

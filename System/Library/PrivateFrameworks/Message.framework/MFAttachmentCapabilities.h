/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:09 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFAttachmentCapabilities : NSObject
+(id)capabilitiesDictionary;
+(BOOL)placeholdersAvailable;
+(BOOL)_limitMailDropOverCellular;
+(BOOL)mailDropAvailableForAccount:(id)arg1 ;
+(unsigned long long)_mailDropLimit;
+(BOOL)mailDropAvailable;
+(BOOL)_isMailDropDevice;
+(BOOL)mailDropConfigured;
+(id)mailDropPreferences;
+(unsigned long long)currentUploadLimit;
+(unsigned long long)currentMessageLimit;
+(unsigned long long)mailDropThreshold;
+(unsigned long long)currentPlaceholderThreshold;
+(unsigned long long)currentDownloadLimit;
+(unsigned long long)currentUploadLimitForAccount:(id)arg1 ;
+(double)mailDropExpiration;
+(id)mailDropWhitelistedDownloadDomains;
@end

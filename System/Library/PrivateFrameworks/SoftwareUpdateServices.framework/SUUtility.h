/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SUUtility : NSObject
+(id)systemContainerURL;
+(id)taskQueue;
+(id)gregorianCalendar;
+(id)errorWithCode:(long long)arg1 ;
+(BOOL)isPasswordProtected;
+(id)currentProductVersion;
+(id)currentProductBuild;
+(id)currentProductType;
+(id)currentReleaseType;
+(void)assignError:(id*)arg1 withCode:(long long)arg2 ;
+(void)assignError:(id*)arg1 withError:(id)arg2 translate:(BOOL)arg3 ;
+(BOOL)isDaemon;
+(unsigned long long)totalPurgeableSpace:(id)arg1 ;
+(BOOL)createInstallationKeybag:(id)arg1 forUnattendedInstall:(BOOL)arg2 ;
+(BOOL)createInstallationKeybag:(id)arg1 ;
+(id)errorWithCode:(long long)arg1 originalError:(id)arg2 ;
+(id)translateError:(id)arg1 ;
+(id)translateError:(id)arg1 withAddedUserInfo:(id)arg2 ;
+(long long)translateErrorCodeFromError:(id)arg1 ;
+(unsigned long long)sortAppsToPurge:(id)arg1 sortedArray:(id*)arg2 spaceNeeded:(id)arg3 ;
+(BOOL)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2 deltaSpaceNeeded:(unsigned long long*)arg3 ;
+(BOOL)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2 deltaSpaceNeeded:(unsigned long long*)arg3 isAutoDownload:(BOOL)arg4 ;
+(BOOL)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2 deltaSpaceNeeded:(unsigned long long*)arg3 isAutoDownload:(BOOL)arg4 includePurging:(BOOL)arg5 ;
+(BOOL)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2 deltaSpaceNeeded:(unsigned long long*)arg3 isAutoDownload:(BOOL)arg4 disableCDLevelFour:(BOOL)arg5 disableCDLevelThree:(BOOL)arg6 disableSiriDeletion:(BOOL)arg7 disableAppDemotion:(BOOL)arg8 ;
+(unsigned long long)appDemoteableSpace;
+(BOOL)freeCachedSpaceSynchronous:(unsigned long long)arg1 timeout:(double)arg2 isAutoDownload:(BOOL)arg3 ;
+(BOOL)freeCachedSpaceSynchronous:(unsigned long long)arg1 timeout:(double)arg2 isAutoDownload:(BOOL)arg3 disableCDLevelFour:(BOOL)arg4 disableSiriDeletion:(BOOL)arg5 disableAppDemotion:(BOOL)arg6 ;
+(unsigned long long)cacheDelete:(id)arg1 ;
+(unsigned long long)demoteApps:(unsigned long long)arg1 withError:(id*)arg2 ;
+(BOOL)isRestoringFromCloud;
+(BOOL)isPasscodeLocked;
+(int)installationKeybagState;
+(void)setIsDaemon:(BOOL)arg1 ;
+(BOOL)isWiFiCapable;
+(BOOL)isCellularDataCapable;
+(BOOL)hasCellularRadio;
+(BOOL)cellularDataIsEnabled;
+(id)currentProductCategory;
+(BOOL)alarmSetBeforeDate:(id)arg1 ;
+(void)postFailureNotification:(id)arg1 body:(id)arg2 buttonText:(id)arg3 altButtonText:(id)arg4 ;
+(BOOL)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2 ;
+(BOOL)freeCachedSpaceSynchronous:(unsigned long long)arg1 timeout:(double)arg2 ;
+(unsigned long long)devicePadding:(id)arg1 ;
+(void)setCacheable:(BOOL)arg1 ;
+(id)URLIfFileExists:(id)arg1 ;
+(id)addToDate:(id)arg1 numberOfDays:(long long)arg2 ;
+(id)prettyPrintDate:(id)arg1 ;
+(id)serialNumber;
@end


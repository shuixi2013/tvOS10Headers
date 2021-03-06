/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <Foundation/NSXPCConnection.h>

@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection {

	NSUUID* _uuid;
	BOOL _isUsingTokenService;

}
+(void)initialize;
+(id)secondaryConnection;
+(id)defaultConnectionIfExists;
+(id)secondaryConnectionIfExists;
+(id)defaultConnection;
+(id)mobileDocumentsURL;
+(id)homeDirectoryURL;
+(id)syncedDesktopURL;
+(id)syncedDocumentsURL;
+(id)syncedRootURLs;
+(id)cloudDocsAppSupportURL;
+(id)cloudDocsCachesURL;
+(id)t_connectionForUUID:(id)arg1 ;
+(void)t_setDefaultConnection:(id)arg1 ;
+(void)t_setMobileDocumentsURL:(id)arg1 ;
+(void)invalidateCachedURLProperties;
-(id)initUsingUserLocalDaemonTokenService;
-(BRXPCSyncProxy*)newSyncTokenProxy;
-(BRXPCSyncProxy*)newSyncProxy;
-(void)_setupAndResume;
-(id)initUsingUserLocalDaemon;
@end


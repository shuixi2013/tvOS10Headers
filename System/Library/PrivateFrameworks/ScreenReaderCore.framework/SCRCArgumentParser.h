/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCArgumentSubcommand.h>

@class NSMutableArray, NSString, SCRCArgumentSubcommand;

@interface SCRCArgumentParser : SCRCArgumentSubcommand {

	int _argc;
	char** _argv;
	NSMutableArray* _subcommandArray;
	NSMutableArray* _argumentArray;
	NSString* _appName;
	SCRCArgumentSubcommand* _subcommand;
	BOOL _isLaunchedAtLogin;

}
+(id)processIdentifier;
+(id)commandPath;
+(id)versionString;
-(void)dealloc;
-(void)stop;
-(int)run;
-(BOOL)parse;
-(id)initWithArgc:(int)arg1 argv:(const char**)arg2 ;
-(id)_displayHelp:(id)arg1 ;
-(id)_displayVersion:(id)arg1 ;
-(int)argc;
-(BOOL)isLaunchedAtLogin;
-(void)addSubcommand:(id)arg1 ;
-(id)setRunningAtStartup:(id)arg1 ;
-(void)setAppName:(id)arg1 ;
-(id)appName;
-(char**)argv;
@end


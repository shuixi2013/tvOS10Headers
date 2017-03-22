/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:07 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class NSString, MFMailMessageLibrary;

@interface MFSqliteMessageIDStore : NSObject {

	NSString* _url;
	int _mailboxRowid;
	MFMailMessageLibrary* _library;

}
-(void)dealloc;
-(void)_loadMailboxRowidIfNecessary:(sqlite3Ref)arg1 ;
-(id)initWithLibrary:(id)arg1 URLString:(id)arg2 ;
-(id)knownMessageIDsFromSet:(id)arg1 ;
-(id)messageIDsAddedBeforeDate:(double)arg1 ;
-(void)deleteUIDsNotInArray:(id)arg1 ;
-(unsigned)numberOfMessageIDs;
-(void)deleteAllUIDs;
-(unsigned long long)flagsForUID:(id)arg1 ;
@end


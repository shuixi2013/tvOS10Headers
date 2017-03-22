/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <DataAccess/DataAccess-Structs.h>
@class NSObject, NSString, NoteContext;

@interface DALocalDBHelper : NSObject {

	NSObject*<OS_dispatch_queue> _abDBQueue;
	NSObject*<OS_dispatch_queue> _calDBQueue;
	NSObject*<OS_dispatch_queue> _bookmarkDBQueue;
	NSObject*<OS_dispatch_queue> _noteDBQueue;
	int _abConnectionCount;
	int _calConnectionCount;
	int _bookmarkConnectionCount;
	int _noteConnectionCount;
	void* _abDB;
	CalDatabase* _calDB;
	NSString* _clientIdentifier;
	void* _bookmarkDB;
	NoteContext* _noteDB;
	/*^block*/id _calUnitTestCallbackBlock;

}

@property (assign,nonatomic) void* abDB;                               //@synthesize abDB=_abDB - In the implementation block
@property (assign,nonatomic) int abConnectionCount;                    //@synthesize abConnectionCount=_abConnectionCount - In the implementation block
@property (assign,nonatomic) CalDatabase* calDB;                       //@synthesize calDB=_calDB - In the implementation block
@property (assign,nonatomic) int calConnectionCount;                   //@synthesize calConnectionCount=_calConnectionCount - In the implementation block
@property (nonatomic,retain) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) void* bookmarkDB;                         //@synthesize bookmarkDB=_bookmarkDB - In the implementation block
@property (assign,nonatomic) int bookmarkConnectionCount;              //@synthesize bookmarkConnectionCount=_bookmarkConnectionCount - In the implementation block
@property (nonatomic,retain) NoteContext * noteDB;                     //@synthesize noteDB=_noteDB - In the implementation block
@property (assign,nonatomic) int noteConnectionCount;                  //@synthesize noteConnectionCount=_noteConnectionCount - In the implementation block
@property (nonatomic,copy) id calUnitTestCallbackBlock;                //@synthesize calUnitTestCallbackBlock=_calUnitTestCallbackBlock - In the implementation block
+(void)abSetTestABDBDir:(id)arg1 ;
+(id)abTestABDBDir;
+(void)calSetTestCalDBDir:(id)arg1 ;
+(id)calTestCalDBDir;
+(id)sharedInstanceForAccountType:(id)arg1 creatingClass:(Class)arg2 ;
-(id)init;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)abOpenDBWithClientIdentifier:(id)arg1 ;
-(BOOL)abCloseDBAndSave:(BOOL)arg1 ;
-(void*)abDBThrowOnNil:(BOOL)arg1 ;
-(void)_registerForAddressBookYieldNotifications;
-(BOOL)_abOpenDBWithClientIdentifier:(id)arg1 ;
-(void)_registerForCalendarYieldNotifications;
-(BOOL)_calOpenDBWithClientIdentifier:(id)arg1 ;
-(id)calUnitTestCallbackBlock;
-(BOOL)noteSaveDB;
-(void)setCalUnitTestCallbackBlock:(id)arg1 ;
-(void)abOpenDBAsGenericClient;
-(void)abClearSuperfluousChanges;
-(void)abProcessAddedRecords;
-(void)abProcessAddedImages;
-(id)abConstraintPlistPath;
-(void)calOpenDBAsGenericClient;
-(void)calClearSuperfluousChanges;
-(BOOL)calSaveDBAndFlushCaches;
-(int)calConnectionCount;
-(void*)bookmarkDB;
-(BOOL)bookmarkOpenDB;
-(void)bookmarkSaveDB;
-(void)bookmarkCloseDBAndSave:(BOOL)arg1 ;
-(void)noteOpenDB;
-(BOOL)noteCloseDBAndSave:(BOOL)arg1 ;
-(int)noteConnectionCount;
-(void)calUnitTestsSetCallbackBlockForSave:(/*^block*/id)arg1 ;
-(void)setAbDB:(void*)arg1 ;
-(int)abConnectionCount;
-(void)setAbConnectionCount:(int)arg1 ;
-(void)setCalDB:(CalDatabase*)arg1 ;
-(void)setCalConnectionCount:(int)arg1 ;
-(void)setBookmarkDB:(void*)arg1 ;
-(int)bookmarkConnectionCount;
-(void)setBookmarkConnectionCount:(int)arg1 ;
-(void)setNoteDB:(NoteContext *)arg1 ;
-(void)setNoteConnectionCount:(int)arg1 ;
-(NSString *)clientIdentifier;
-(CalDatabase*)calDB;
-(id)changeTrackingID;
-(void)calOpenDBWithClientIdentifier:(id)arg1 ;
-(BOOL)calCloseDBAndSave:(BOOL)arg1 ;
-(void*)abDB;
-(BOOL)abSaveDB;
-(BOOL)calSaveDB;
-(NoteContext *)noteDB;
@end


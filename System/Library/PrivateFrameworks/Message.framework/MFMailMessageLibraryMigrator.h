/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:10 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFMailMessageLibraryMigrator : NSObject {

	int _needsSpotlightReindex;

}
-(BOOL)migrateWithSQLiteConnection:(id)arg1 ;
-(BOOL)needsSpotlightReindex;
-(void)noteNeedsSpotlightReindex;
@end


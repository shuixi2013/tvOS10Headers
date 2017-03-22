/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:03 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MBFileSystemManager : NSObject {

	BOOL _supportsLocalSnapshots;
	NSString* _currentSnapshotPath;
	NSString* _currentSnapshotName;
	NSString* _fileSystemType;

}

@property (nonatomic,retain) NSString * fileSystemType;                     //@synthesize fileSystemType=_fileSystemType - In the implementation block
@property (nonatomic,readonly) BOOL supportsLocalSnapshots;                 //@synthesize supportsLocalSnapshots=_supportsLocalSnapshots - In the implementation block
@property (nonatomic,readonly) NSString * currentSnapshotPath;              //@synthesize currentSnapshotPath=_currentSnapshotPath - In the implementation block
@property (nonatomic,readonly) NSString * currentSnapshotName;              //@synthesize currentSnapshotName=_currentSnapshotName - In the implementation block
+(id)sharedManager;
+(unsigned long long)fileSystemCapacity;
+(unsigned long long)availableCacheSize;
-(id)init;
-(id)description;
-(BOOL)_isFileSystemAPFS;
-(id)_snapshotName:(id)arg1 ;
-(BOOL)snapshotFilesystem:(id)arg1 withError:(id*)arg2 ;
-(BOOL)removeSnapshot:(id)arg1 withError:(id*)arg2 ;
-(BOOL)mountSnapshot:(id)arg1 withError:(id*)arg2 ;
-(BOOL)unmountCurrentSnapshotAndRemove:(BOOL)arg1 withError:(id*)arg2 ;
-(BOOL)supportsLocalSnapshots;
-(NSString *)currentSnapshotPath;
-(NSString *)currentSnapshotName;
-(NSString *)fileSystemType;
-(void)setFileSystemType:(NSString *)arg1 ;
@end


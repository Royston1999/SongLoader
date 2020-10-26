#pragma once
#include "GlobalNamespace/LevelFilteringNavigationController.hpp"
#include "GlobalNamespace/SongPackMask.hpp"
#include "GlobalNamespace/SelectLevelCategoryViewController.hpp"
#include "GlobalNamespace/CustomLevelLoader.hpp"
#include "GlobalNamespace/PlayerData.hpp"
#include "GlobalNamespace/PlayerDataModel.hpp"
#include "GlobalNamespace/StandardLevelDetailViewController.hpp"
#include "GlobalNamespace/StandardLevelDetailView.hpp"
#include "GlobalNamespace/FileHelpers.hpp"
#include "GlobalNamespace/AlwaysOwnedContentContainerSO.hpp"
#include "GlobalNamespace/BeatmapLevelsModel.hpp"
#include "GlobalNamespace/StandardLevelInfoSaveData.hpp"
#include "GlobalNamespace/StandardLevelInfoSaveData_DifficultyBeatmap.hpp"
#include "GlobalNamespace/StandardLevelInfoSaveData_DifficultyBeatmapSet.hpp"
#include "GlobalNamespace/PreviewDifficultyBeatmapSet.hpp"
#include "GlobalNamespace/BeatmapData.hpp"
#include "GlobalNamespace/BeatmapLevelData.hpp"
#include "GlobalNamespace/IDifficultyBeatmapSet.hpp"
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "GlobalNamespace/BeatmapDifficultySerializedMethods.hpp"
#include "GlobalNamespace/BeatmapCharacteristicCollectionSO.hpp"
#include "GlobalNamespace/CustomPreviewBeatmapLevel.hpp"
#include "GlobalNamespace/CustomBeatmapLevel.hpp"
#include "GlobalNamespace/BeatmapLevelPackCollectionContainerSO.hpp"
#include "GlobalNamespace/CustomDifficultyBeatmap.hpp"
#include "GlobalNamespace/CustomDifficultyBeatmapSet.hpp"
#include "GlobalNamespace/CustomBeatmapLevelPack.hpp"
#include "GlobalNamespace/CustomBeatmapLevelCollection.hpp"
#include "GlobalNamespace/BeatmapCharacteristicSO.hpp"
#include "GlobalNamespace/BeatmapLevelPackCollection.hpp"
#include "GlobalNamespace/BeatmapLevelPackCollectionSO.hpp"
#include "GlobalNamespace/BeatmapDataLoader.hpp"
#include "GlobalNamespace/EnvironmentInfoSO.hpp"
#include "GlobalNamespace/EnvironmentsListSO.hpp"
#include "GlobalNamespace/CachedMediaAsyncLoader.hpp"
#include "GlobalNamespace/IAudioClipAsyncLoader.hpp"
#include "GlobalNamespace/ISpriteAsyncLoader.hpp"
#include "GlobalNamespace/HMCache_2.hpp"
#include "UnityEngine/Networking/UnityWebRequestAsyncOperation.hpp"
#include "UnityEngine/Networking/UnityWebRequest.hpp"
#include "UnityEngine/Networking/UnityWebRequestMultimedia.hpp"
#include "UnityEngine/Networking/DownloadHandlerAudioClip.hpp"
#include "UnityEngine/AudioType.hpp"
#include "UnityEngine/AudioClip.hpp"
#include "UnityEngine/UI/Button.hpp"
#include "UnityEngine/Vector2.hpp"
#include "UnityEngine/Vector3.hpp"
#include "UnityEngine/Vector4.hpp"
#include "UnityEngine/Rect.hpp"
#include "UnityEngine/Resources.hpp"
#include "UnityEngine/Sprite.hpp"
#include "UnityEngine/SpriteMeshType.hpp"
#include "System/String.hpp"
#include "System/Threading/CancellationToken.hpp"
#include "System/Threading/CancellationTokenSource.hpp"
#include "System/Threading/Tasks/Task.hpp"
#include "System/Threading/Tasks/Task_1.hpp"
#include "System/Threading/Tasks/TaskStatus.hpp"
#include "System/IO/Path.hpp"
#include "System/IO/File.hpp"
#include "System/IO/Directory.hpp"
#include "System/IO/DirectoryInfo.hpp"
#include "System/Collections/Generic/HashSet_1.hpp"
#include "System/Collections/Generic/Dictionary_2.hpp"
#include "System/Security/Cryptography/SHA1.hpp"
#include "System/BitConverter.hpp"
#include "System/Convert.hpp"
#include "System/Collections/Generic/List_1.hpp"
#include "System/Linq/Enumerable.hpp"
#include "UnityEngine/Texture2D.hpp"
#include "UnityEngine/TextureFormat.hpp"
#include "UnityEngine/ImageConversion.hpp"
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "GlobalNamespace/BeatmapCharacteristicSO.hpp"
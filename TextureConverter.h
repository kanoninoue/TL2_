#pragma once
#include <DirectXTex.h>
#include <string>
class TextureConverter
{
public:
	/// <summary>
	///�e�N�X�`����WIC����DDS�ɕϊ�����
	/// </summary>
	/// <param name="filePath">�t�@�C���p�X<param>
	void ConvertTextureWICToDDS(const std::string& filePath);

private:
	/// <summary>
	///�e�N�X�`���ǂݍ���
	/// </summary>
	/// <param name="filePath">�t�@�C���p�X<param>
	void LoadWICTextureFromFile(const std::string& filePath);

	/// <summary>
	/// �}���`�o�C�g����������C�h������ɕϊ�
	/// </summary>
	/// <param name="filePath">�}���`�o�C�g������<param>
	///<returns>���C�h������</returns>
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);
};
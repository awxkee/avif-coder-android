//
// Created by Radzivon Bartoshyk on 11/10/2024.
//

#ifndef AVIF_TRC_H
#define AVIF_TRC_H

enum TransferFunction {
    /// sRGB Transfer function
    Srgb,
    /// Rec.709 Transfer function
    Itur709,
    /// Pure gamma 2.2 Transfer function, ITU-R 470M
    Gamma2p2,
    /// Pure gamma 2.8 Transfer function, ITU-R 470BG
    Gamma2p8,
    /// Smpte 428 Transfer function
    Smpte428,
    /// Log100 Transfer function
    Log100,
    /// Log100Sqrt10 Transfer function
    Log100Sqrt10,
    /// Bt1361 Transfer function
    Bt1361,
    /// Smpte 240 Transfer function
    Smpte240,
    /// PQ Transfer function
    Pq,
    /// HLG (Hybrid log gamma) Transfer function
    Hlg,
    /// Linear transfer function
    Linear,
    Iec61966,
};

float toLinear(float gamma, TransferFunction trc);
float toGamma(float gamma, TransferFunction trc);

float avifToLinear709(float gamma);
float avifToGamma709(float linear);
float avifToLinear470M(float gamma);
float avifToGamma470M(float linear);
float avifToLinear470BG(float gamma);
float avifToGamma470BG(float linear);
float avifToLinearSMPTE240(float gamma);
float avifToGammaSMPTE240(float linear);
float avifToGammaLinear(float gamma);
float avifToLinearLog100(float gamma);
float avifToGammaLog100(float linear);
float avifToLinearLog100Sqrt10(float gamma);
float avifToGammaLog100Sqrt10(float linear);
float avifToLinearIEC61966(float gamma);
float avifToGammaIEC61966(float linear);
float avifToLinearBT1361(float gamma);
float avifToGammaBT1361(float linear);
float avifToLinearSRGB(float gamma);
float avifToGammaSRGB(float linear);
float avifToLinearPQ(float gamma);
float avifToGammaPQ(float linear);
float avifToLinearSMPTE428(float gamma);
float avifToGammaSMPTE428(float linear);
float avifToLinearHLG(float gamma);
float avifToGammaHLG(float linear);

#endif //AVIF_TRC_H

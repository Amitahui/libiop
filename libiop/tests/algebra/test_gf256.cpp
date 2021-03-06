#include <gtest/gtest.h>

#include "libiop/algebra/fields/gf256.hpp"

namespace libiop {

gf256 gf256_mul(const uint64_t &a_val_high, const uint64_t &a_val_midh,
                const uint64_t &a_val_midl, const uint64_t &a_val_low,
                const uint64_t &b_val_high, const uint64_t &b_val_midh,
                const uint64_t &b_val_midl, const uint64_t &b_val_low)
{
    return gf256(a_val_high, a_val_midh, a_val_midl, a_val_low) *
           gf256(b_val_high, b_val_midh, b_val_midl, b_val_low);
}

/* test cases generated by sage/gf256.sage script */

TEST(MultiplicationTest, SageTests) {
    EXPECT_EQ(gf256_mul(0xf764a67447957a65LL, 0x897bb93561e04d72LL, 0x0fe9a9f10ea6b3beLL, 0x614becf0f6981970LL, 0xf507be43450e596cLL, 0x7625671a07a1b127LL, 0xb6f0e7fe834a305fLL, 0x5d1bce4867374275LL), gf256(0x7830000656b147bbLL, 0x84aedc89d9eef7d5LL, 0x206521a58a74c76dLL, 0x15b45070f9272694LL));
    EXPECT_EQ(gf256_mul(0xb4dab96b1454919dLL, 0x23fad70584b9ff24LL, 0x00a7fced16ffa59bLL, 0x7009d6ea6cbc3723LL, 0x633c9cefc089eb74LL, 0x0fd73239d93bd077LL, 0x5756b56a1d208f91LL, 0xac2c97ebcf121998LL), gf256(0xec433aa096b7c5a3LL, 0xb988c6486912b0ffLL, 0xf4974416b3ec0351LL, 0xa0abd7439b4a90b4LL));
    EXPECT_EQ(gf256_mul(0xfae308c406eb08feLL, 0x49bfcd0bd4d96b01LL, 0xf55ab02f9dae69b8LL, 0xc1c42adfa999b078LL, 0x1cf009d26ee1f80fLL, 0xf2e6b1294f40ac62LL, 0x512288f4b06917d3LL, 0xd2c36d17d828d9b4LL), gf256(0xd4c9b1f1b6032f4aLL, 0x5a443906b0fd92f4LL, 0x069ef58da6005ef0LL, 0x81149bf7a2a4e9efLL));
    EXPECT_EQ(gf256_mul(0x579c25544b3ba640LL, 0x7766723a1141eddcLL, 0x206901073d267fa5LL, 0x9a2789bfb11c03c4LL, 0x1d5e8949c38296e0LL, 0x224aa1e6e025b316LL, 0x84eb9e2187501666LL, 0xc78b2478a98afb85LL), gf256(0xc92ed4a7f831b22eLL, 0x42d345a89b213da0LL, 0x6ca9b1401b327636LL, 0x81a1d4e28ecb3203LL));
    EXPECT_EQ(gf256_mul(0x034858f4f1f7b14bLL, 0x75bee645ed32bf73LL, 0xfaaf7393e729adf5LL, 0xe4e8ae96b691f6d2LL, 0xae8f8592118650dfLL, 0x4105e1bce7fda1a5LL, 0x94659c82eed44ed6LL, 0x0d6f1491ffab6313LL), gf256(0x3c58c4917b50380aLL, 0x155a26d3e04dc3f9LL, 0x0ece08a653d5d785LL, 0xa0491208d489ad20LL));
    EXPECT_EQ(gf256_mul(0x22677e786437ded8LL, 0xeab6bb9efffe16f2LL, 0xae333a6c2e525a7eLL, 0x9ded3331f7e20e08LL, 0x724efc0872e555d7LL, 0x13ee2aa2bc56bb9fLL, 0x4b28b4a78b34aed6LL, 0xc9a973387db34f3cLL), gf256(0x31c713050f9fe79fLL, 0x91f3134564072e28LL, 0xbd3b97df5ceaa321LL, 0x85ae031df2087301LL));
    EXPECT_EQ(gf256_mul(0xe103fdd38559f718LL, 0xbde830a033005e9dLL, 0x5980393a96b7e262LL, 0xbee979d0d3e73491LL, 0x24d79165090b54bbLL, 0x6be4979855b9f4a1LL, 0x3c84f51267ae0f3eLL, 0x49762387dc75fbcfLL), gf256(0xaf3c148f5a6d62b6LL, 0xcb2caa9c1491eb09LL, 0x9d964ce7c25f9cc4LL, 0xf0774bdc5efd321bLL));
    EXPECT_EQ(gf256_mul(0xc8d362a82d40e33dLL, 0x7ebb79ea0539aab6LL, 0xd4cb229a76bbfdf8LL, 0xe1ed007e6b4d18c4LL, 0xc5ff42586ffe84beLL, 0x2fa0d6324909d6bcLL, 0xd059de8a3f216806LL, 0x11ce6283a327c2aeLL), gf256(0x6d8f5131a50a1174LL, 0x3716b1b7b85aa29fLL, 0x786f09fc7add372aLL, 0xd9be899417749c66LL));
    EXPECT_EQ(gf256_mul(0xa34a5c6dc2269e92LL, 0xd4926e0f5173ba59LL, 0xad04af41cefd288cLL, 0xd6910fac0958e021LL, 0xb8efe59559134148LL, 0xe2df550b05c8346bLL, 0x471c649050d8df10LL, 0x3c4ddb6e1d7bdf2bLL), gf256(0x31bc02040d35ef67LL, 0xf4df56b7f489a233LL, 0x94a98345cd1c505eLL, 0x9b8880399d5b6f17LL));
    EXPECT_EQ(gf256_mul(0x0dd2d419a879877eLL, 0xbbd7c0e1cb89df45LL, 0xb920792cb175a788LL, 0xfe328eb0319d0dd7LL, 0xfdd10984711604a6LL, 0x449e2950c151d1f4LL, 0x06b95b1542038a8aLL, 0xbbc51592da56e2feLL), gf256(0x5eac8a0dfe585d7dLL, 0x8bb81c1be4902348LL, 0xb441d39d98693d34LL, 0x480e988c351ac9f3LL));
}

TEST(InverseTest, SimpleTest) {
    const gf256 a = gf256::random_element();
    const gf256 a_inv = a.inverse();

    EXPECT_EQ(a*a_inv, gf256(1));
}

}

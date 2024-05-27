// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
namespace rl_tools::checkpoint::actor {
    namespace layer_0 {
        namespace weights {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {122, 186, 112, 191, 125, 69, 92, 190, 167, 240, 7, 191, 122, 8, 80, 187, 119, 203, 189, 190, 245, 235, 143, 190, 10, 177, 139, 190, 51, 191, 250, 62, 19, 165, 223, 190, 141, 231, 66, 62, 14, 254, 112, 191, 245, 0, 14, 62, 110, 152, 11, 63, 137, 1, 139, 63, 255, 49, 149, 62, 50, 188, 47, 63, 151, 82, 32, 191, 75, 161, 246, 190, 157, 51, 180, 190, 167, 108, 52, 191, 71, 79, 225, 62, 202, 211, 79, 61, 232, 196, 143, 191, 236, 205, 85, 190, 62, 84, 180, 62, 23, 186, 10, 63, 161, 31, 85, 190, 112, 101, 31, 63, 91, 250, 239, 190, 122, 169, 226, 190, 17, 163, 172, 190, 16, 184, 69, 63, 242, 30, 56, 62, 118, 180, 26, 191, 246, 63, 74, 63, 219, 54, 74, 62, 254, 211, 140, 190, 197, 94, 199, 62, 192, 102, 178, 190, 150, 210, 121, 191, 70, 222, 165, 190, 21, 36, 11, 189, 87, 126, 77, 62, 216, 169, 55, 191, 26, 198, 30, 63, 60, 210, 34, 63, 195, 11, 37, 191, 61, 89, 236, 61, 87, 135, 228, 60, 199, 216, 206, 62, 59, 151, 44, 63, 27, 58, 149, 190, 248, 2, 121, 191, 245, 99, 230, 190, 112, 159, 33, 63, 214, 110, 6, 63, 206, 33, 231, 62, 46, 64, 92, 63, 94, 55, 80, 191, 93, 134, 162, 190, 24, 29, 233, 190, 22, 71, 87, 191, 5, 145, 114, 190, 22, 211, 104, 189, 244, 186, 189, 63, 62, 50, 166, 62, 51, 149, 110, 63, 160, 117, 90, 191, 215, 70, 56, 190, 34, 71, 5, 63, 123, 48, 170, 60, 160, 152, 211, 62, 48, 29, 197, 190, 66, 48, 111, 191, 57, 231, 133, 190, 183, 152, 219, 190, 89, 115, 1, 63, 161, 207, 175, 62, 111, 133, 200, 62, 99, 49, 128, 191, 226, 193, 115, 190, 75, 80, 226, 190, 34, 83, 132, 189, 206, 84, 146, 189, 109, 121, 93, 191, 92, 38, 170, 61, 140, 214, 180, 189, 151, 82, 252, 190, 249, 83, 62, 63, 177, 73, 2, 63, 107, 229, 211, 190, 177, 242, 191, 190, 147, 146, 250, 190, 196, 36, 180, 190, 196, 134, 130, 63, 233, 34, 135, 62};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 32, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace biases {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {237, 167, 13, 191, 34, 161, 11, 62, 21, 169, 39, 190, 88, 184, 82, 190, 133, 121, 251, 189, 210, 220, 115, 190, 40, 101, 161, 62, 17, 117, 166, 190, 240, 88, 178, 62, 96, 11, 64, 189, 75, 209, 164, 187, 217, 139, 28, 62, 79, 159, 20, 63, 49, 12, 165, 62, 196, 44, 221, 190, 82, 2, 90, 62, 55, 47, 159, 62, 146, 240, 229, 62, 72, 131, 167, 190, 130, 21, 28, 191, 67, 16, 51, 63, 111, 6, 196, 62, 113, 109, 186, 62, 122, 71, 153, 62, 177, 20, 133, 61, 39, 78, 182, 190, 99, 122, 11, 191, 198, 92, 5, 63, 214, 241, 20, 63, 211, 251, 83, 62, 228, 246, 66, 191, 65, 79, 232, 62};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_0 {
        using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Specification<float, unsigned long, 3, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::RELU, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamicTag, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>; 
        template <typename CAPABILITY>
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        const TYPE layer = {weights::parameters, biases::parameters};
    }
    namespace layer_1 {
        namespace weights {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {3, 6, 128, 190, 32, 8, 95, 62, 158, 78, 211, 62, 153, 231, 145, 62, 236, 129, 149, 62, 150, 54, 239, 60, 63, 246, 133, 189, 84, 1, 185, 61, 70, 107, 12, 62, 52, 82, 17, 189, 85, 179, 59, 190, 94, 11, 7, 191, 50, 62, 250, 61, 15, 0, 66, 191, 48, 68, 131, 62, 25, 211, 37, 189, 254, 198, 53, 61, 194, 186, 42, 190, 123, 195, 162, 62, 205, 205, 14, 62, 150, 100, 98, 191, 60, 25, 156, 61, 66, 103, 150, 190, 181, 3, 211, 61, 112, 73, 223, 61, 16, 145, 44, 58, 130, 141, 249, 61, 151, 161, 145, 190, 129, 148, 1, 191, 66, 78, 148, 189, 231, 228, 19, 62, 212, 134, 3, 190, 179, 226, 115, 60, 219, 237, 8, 190, 233, 215, 223, 61, 28, 171, 169, 189, 144, 100, 200, 189, 107, 68, 31, 190, 242, 21, 218, 61, 134, 54, 47, 61, 175, 141, 48, 62, 26, 191, 129, 61, 41, 178, 7, 190, 57, 37, 32, 190, 239, 61, 40, 190, 67, 252, 239, 189, 143, 242, 33, 190, 48, 210, 51, 189, 219, 79, 58, 60, 199, 182, 25, 190, 71, 0, 21, 61, 162, 22, 201, 61, 87, 15, 22, 190, 124, 83, 191, 189, 127, 35, 150, 59, 29, 223, 137, 189, 243, 141, 159, 189, 18, 246, 46, 62, 187, 5, 190, 61, 26, 8, 199, 189, 218, 107, 96, 61, 184, 145, 20, 190, 133, 187, 176, 188, 15, 201, 30, 62, 219, 44, 243, 60, 21, 63, 152, 189, 202, 162, 142, 61, 120, 101, 158, 61, 198, 80, 18, 60, 17, 248, 167, 188, 47, 168, 180, 61, 91, 190, 29, 190, 25, 178, 246, 61, 187, 67, 252, 60, 41, 16, 55, 61, 178, 76, 96, 60, 216, 98, 133, 62, 54, 0, 196, 61, 44, 146, 161, 61, 248, 203, 99, 189, 68, 102, 228, 61, 204, 49, 73, 61, 81, 175, 204, 189, 87, 153, 171, 190, 16, 58, 108, 62, 234, 103, 124, 188, 247, 198, 133, 62, 64, 148, 92, 61, 248, 96, 156, 61, 103, 34, 224, 60, 80, 21, 182, 61, 137, 54, 93, 62, 97, 142, 209, 61, 41, 249, 31, 62, 193, 186, 95, 189, 201, 95, 0, 190, 223, 182, 135, 62, 246, 226, 231, 61, 180, 152, 139, 189, 253, 70, 250, 190, 178, 238, 3, 191, 249, 28, 89, 190, 219, 198, 137, 62, 230, 215, 23, 190, 107, 224, 183, 189, 233, 127, 198, 190, 208, 32, 62, 191, 161, 101, 225, 189, 109, 144, 25, 61, 96, 100, 187, 62, 169, 155, 185, 62, 177, 88, 1, 191, 86, 29, 134, 191, 112, 202, 152, 62, 5, 78, 150, 190, 45, 214, 71, 191, 167, 168, 131, 62, 119, 165, 153, 190, 214, 110, 177, 190, 143, 165, 208, 190, 222, 27, 26, 62, 18, 17, 187, 191, 28, 20, 215, 190, 138, 23, 192, 61, 115, 131, 99, 62, 184, 190, 40, 190, 193, 61, 147, 190, 44, 158, 219, 61, 47, 75, 172, 189, 85, 107, 25, 61, 239, 214, 160, 61, 126, 75, 244, 190, 89, 129, 42, 62, 25, 163, 132, 190, 245, 159, 69, 189, 10, 172, 16, 191, 253, 0, 122, 62, 95, 25, 44, 190, 149, 87, 77, 191, 161, 55, 233, 190, 212, 38, 97, 62, 150, 7, 77, 62, 211, 71, 2, 190, 169, 43, 55, 62, 179, 128, 193, 189, 155, 224, 75, 62, 254, 69, 207, 62, 99, 244, 76, 191, 142, 71, 109, 61, 108, 184, 0, 62, 20, 217, 162, 60, 65, 82, 71, 62, 170, 155, 232, 189, 169, 82, 104, 191, 101, 225, 235, 190, 219, 83, 255, 61, 102, 151, 78, 62, 217, 239, 155, 190, 226, 168, 23, 190, 177, 221, 92, 61, 93, 73, 7, 190, 93, 137, 30, 190, 155, 126, 160, 61, 177, 184, 242, 61, 202, 4, 18, 62, 104, 239, 131, 61, 88, 181, 23, 62, 228, 20, 110, 60, 141, 116, 157, 189, 250, 188, 151, 61, 90, 13, 243, 60, 155, 112, 200, 189, 248, 248, 23, 188, 168, 215, 167, 60, 66, 34, 163, 189, 102, 148, 51, 61, 27, 74, 171, 187, 93, 207, 21, 190, 112, 80, 239, 61, 57, 84, 209, 189, 133, 111, 69, 61, 145, 227, 2, 61, 54, 29, 245, 189, 5, 251, 51, 190, 18, 239, 35, 190, 15, 171, 247, 189, 220, 37, 154, 59, 55, 34, 7, 190, 239, 200, 245, 189, 11, 175, 163, 189, 61, 223, 19, 189, 108, 97, 127, 189, 235, 136, 155, 191, 6, 92, 147, 190, 37, 68, 130, 190, 31, 114, 189, 62, 227, 252, 22, 191, 232, 161, 131, 62, 116, 121, 181, 61, 251, 52, 108, 191, 189, 185, 167, 61, 165, 211, 51, 62, 243, 153, 154, 61, 131, 91, 57, 62, 25, 140, 202, 60, 66, 24, 86, 61, 56, 31, 139, 60, 44, 159, 114, 62, 237, 239, 50, 190, 132, 212, 158, 190, 58, 54, 80, 190, 196, 237, 210, 189, 94, 153, 181, 187, 73, 170, 117, 61, 24, 174, 74, 62, 133, 107, 25, 190, 188, 148, 134, 190, 113, 49, 83, 61, 53, 63, 22, 191, 82, 8, 244, 61, 42, 209, 102, 62, 170, 156, 29, 188, 113, 251, 132, 190, 102, 86, 151, 61, 2, 246, 109, 189, 60, 136, 71, 61, 194, 210, 91, 61, 250, 68, 142, 190, 230, 228, 108, 190, 136, 184, 6, 62, 188, 212, 97, 190, 88, 123, 29, 191, 86, 62, 244, 61, 230, 27, 161, 60, 171, 204, 154, 190, 2, 130, 234, 190, 161, 209, 95, 62, 186, 236, 89, 190, 115, 73, 27, 60, 176, 98, 3, 62, 42, 201, 244, 190, 162, 253, 136, 189, 124, 105, 103, 190, 215, 25, 252, 189, 85, 156, 8, 190, 46, 3, 160, 187, 248, 10, 139, 61, 58, 47, 177, 60, 130, 41, 118, 60, 190, 89, 56, 190, 30, 18, 27, 191, 48, 172, 17, 62, 152, 244, 9, 190, 65, 63, 31, 190, 46, 97, 163, 189, 115, 67, 116, 189, 188, 131, 145, 189, 88, 38, 10, 62, 159, 8, 204, 189, 21, 106, 16, 62, 8, 51, 130, 188, 94, 212, 166, 61, 66, 254, 201, 60, 201, 241, 147, 190, 159, 162, 236, 189, 114, 172, 119, 188, 24, 78, 184, 189, 13, 212, 163, 61, 83, 33, 23, 62, 24, 174, 104, 62, 36, 246, 140, 188, 7, 196, 0, 62, 248, 212, 42, 61, 104, 15, 16, 62, 221, 112, 8, 190, 174, 96, 13, 190, 161, 227, 36, 62, 154, 222, 29, 62, 105, 2, 44, 188, 155, 227, 13, 62, 217, 12, 85, 61, 228, 27, 142, 60, 123, 134, 226, 189, 106, 145, 30, 190, 230, 235, 146, 188, 87, 181, 200, 187, 96, 13, 23, 189, 128, 222, 0, 190, 79, 140, 254, 190, 248, 4, 27, 62, 133, 255, 234, 62, 173, 243, 191, 62, 143, 248, 137, 62, 69, 40, 120, 62, 73, 25, 146, 61, 60, 16, 229, 62, 13, 108, 164, 62, 0, 133, 138, 185, 149, 124, 54, 190, 193, 67, 253, 190, 25, 91, 85, 61, 12, 22, 24, 191, 123, 176, 76, 190, 54, 37, 59, 62, 76, 131, 72, 61, 10, 250, 130, 190, 17, 204, 29, 62, 96, 64, 182, 60, 48, 0, 209, 190, 148, 15, 29, 62, 244, 57, 177, 62, 179, 136, 179, 62, 32, 146, 161, 190, 162, 27, 105, 190, 152, 231, 0, 63, 151, 93, 237, 189, 159, 189, 190, 190, 103, 147, 105, 61, 136, 210, 191, 61, 213, 64, 161, 60, 191, 247, 16, 191, 139, 250, 85, 60, 184, 143, 195, 189, 136, 244, 61, 62, 244, 139, 112, 190, 113, 228, 44, 62, 54, 109, 98, 62, 248, 41, 111, 190, 109, 125, 2, 62, 234, 247, 239, 61, 254, 2, 15, 62, 58, 165, 183, 61, 169, 165, 228, 189, 169, 40, 21, 62, 247, 164, 6, 190, 245, 215, 221, 188, 76, 251, 191, 61, 233, 187, 231, 189, 48, 165, 75, 190, 114, 191, 70, 190, 54, 87, 73, 62, 20, 248, 143, 189, 134, 35, 47, 61, 1, 250, 237, 61, 149, 58, 35, 62, 46, 54, 31, 62, 184, 30, 239, 189, 10, 39, 148, 188, 195, 183, 73, 61, 190, 208, 205, 61, 53, 214, 80, 190, 212, 189, 255, 188, 178, 112, 124, 61, 61, 246, 91, 61, 185, 233, 82, 62, 164, 242, 188, 60, 181, 217, 21, 62, 116, 86, 45, 62, 21, 209, 16, 62, 18, 235, 234, 188, 206, 23, 29, 189, 101, 218, 4, 62, 170, 55, 215, 190, 198, 57, 23, 191, 33, 178, 4, 62, 6, 130, 34, 62, 118, 4, 177, 61, 42, 187, 194, 62, 93, 88, 21, 61, 153, 130, 155, 61, 58, 204, 193, 188, 158, 156, 81, 189, 177, 67, 139, 62, 174, 216, 133, 189, 164, 64, 102, 62, 251, 180, 156, 62, 100, 115, 148, 61, 94, 240, 147, 190, 240, 213, 61, 189, 134, 144, 16, 60, 97, 105, 26, 62, 187, 54, 3, 190, 72, 26, 120, 189, 207, 66, 49, 190, 77, 190, 180, 61, 79, 5, 29, 190, 235, 250, 221, 60, 193, 96, 31, 191, 201, 131, 243, 62, 11, 46, 109, 189, 206, 41, 29, 190, 195, 83, 9, 62, 221, 111, 169, 189, 20, 51, 39, 61, 131, 199, 37, 190, 70, 247, 131, 62, 75, 197, 132, 190, 57, 201, 141, 190, 145, 33, 60, 189, 249, 120, 16, 191, 253, 206, 216, 189, 57, 198, 169, 189, 159, 255, 168, 60, 164, 103, 40, 62, 11, 64, 152, 190, 199, 209, 50, 62, 10, 59, 24, 191, 229, 199, 232, 189, 114, 105, 64, 190, 240, 56, 108, 61, 62, 202, 159, 189, 193, 120, 177, 60, 245, 192, 68, 190, 152, 6, 202, 61, 149, 187, 250, 61, 9, 127, 250, 61, 43, 148, 190, 61, 41, 102, 212, 61, 130, 182, 198, 189, 191, 228, 168, 61, 92, 83, 192, 61, 157, 253, 126, 61, 234, 122, 28, 189, 218, 63, 225, 188, 147, 24, 20, 189, 19, 243, 212, 189, 153, 167, 207, 189, 137, 126, 106, 57, 32, 171, 8, 190, 121, 217, 174, 188, 6, 221, 15, 190, 142, 146, 16, 62, 90, 241, 45, 190, 244, 172, 62, 185, 199, 135, 33, 190, 92, 5, 170, 61, 32, 193, 59, 61, 125, 150, 130, 189, 241, 69, 106, 189, 158, 66, 220, 61, 168, 207, 23, 190, 64, 153, 201, 186, 12, 101, 47, 189, 194, 104, 177, 189, 245, 130, 203, 61, 0, 104, 101, 61, 126, 170, 27, 62, 194, 228, 50, 62, 166, 223, 244, 189, 1, 75, 55, 62, 239, 169, 119, 189, 199, 25, 12, 63, 223, 171, 231, 190, 66, 68, 178, 62, 56, 48, 140, 62, 87, 9, 42, 190, 13, 92, 142, 60, 41, 129, 64, 62, 53, 117, 217, 190, 98, 148, 54, 191, 144, 12, 16, 62, 242, 79, 123, 190, 249, 244, 63, 61, 109, 185, 144, 62, 250, 142, 163, 187, 33, 51, 218, 189, 172, 18, 63, 61, 84, 114, 4, 61, 250, 62, 8, 62, 178, 7, 68, 190, 49, 23, 187, 62, 189, 179, 200, 60, 0, 58, 238, 189, 147, 51, 193, 189, 223, 94, 122, 190, 201, 23, 14, 190, 112, 92, 115, 190, 233, 100, 68, 190, 221, 51, 255, 61, 1, 138, 144, 191, 122, 39, 11, 189, 50, 47, 17, 190, 147, 12, 207, 62, 74, 20, 15, 62, 192, 1, 126, 62, 248, 14, 200, 187, 230, 32, 239, 61, 128, 213, 41, 62, 155, 44, 91, 62, 200, 138, 9, 62, 154, 236, 30, 62, 176, 155, 229, 60, 154, 149, 85, 189, 95, 32, 193, 61, 218, 10, 204, 61, 109, 229, 102, 62, 182, 253, 229, 61, 253, 8, 172, 189, 93, 160, 225, 189, 134, 247, 213, 60, 56, 143, 180, 189, 22, 232, 91, 62, 166, 191, 85, 62, 36, 228, 164, 61, 147, 101, 92, 61, 9, 39, 243, 61, 17, 190, 139, 62, 94, 13, 230, 61, 117, 51, 70, 189, 255, 187, 12, 190, 178, 98, 84, 62, 139, 126, 89, 62, 254, 114, 161, 57, 74, 213, 182, 61, 69, 167, 164, 62, 70, 203, 31, 62, 152, 158, 201, 61, 90, 63, 71, 62, 71, 203, 189, 188, 125, 243, 129, 190, 82, 12, 168, 189, 93, 61, 51, 59, 60, 134, 2, 63, 150, 160, 247, 62, 197, 1, 93, 62, 224, 133, 64, 190, 181, 107, 200, 188, 249, 35, 246, 62, 3, 47, 94, 191, 16, 173, 172, 61, 57, 221, 41, 191, 199, 172, 68, 62, 7, 221, 82, 189, 57, 77, 147, 190, 129, 193, 23, 62, 168, 95, 143, 190, 155, 163, 226, 61, 91, 133, 9, 61, 208, 191, 216, 189, 86, 246, 11, 190, 97, 121, 129, 189, 195, 1, 18, 191, 223, 105, 166, 60, 35, 163, 99, 190, 16, 157, 3, 61, 21, 137, 24, 62, 212, 35, 68, 61, 99, 96, 251, 61, 173, 55, 35, 190, 234, 137, 149, 60, 171, 212, 12, 190, 223, 207, 38, 190, 88, 123, 191, 60, 6, 48, 173, 189, 202, 112, 187, 188, 113, 104, 16, 190, 159, 28, 65, 190, 226, 195, 200, 60, 165, 247, 176, 189, 41, 230, 35, 61, 22, 240, 22, 62, 160, 195, 119, 61, 211, 57, 60, 189, 166, 124, 19, 190, 184, 106, 32, 190, 115, 147, 85, 61, 98, 140, 92, 61, 200, 238, 11, 189, 60, 132, 209, 189, 217, 12, 246, 60, 63, 32, 10, 62, 39, 46, 228, 60, 232, 145, 24, 190, 130, 66, 76, 188, 151, 184, 35, 60, 61, 115, 11, 189, 60, 44, 182, 61, 235, 108, 166, 61, 130, 132, 235, 61, 171, 74, 50, 189, 163, 222, 59, 191, 95, 234, 168, 62, 73, 9, 92, 61, 154, 10, 139, 191, 41, 8, 122, 62, 136, 239, 222, 62, 186, 181, 95, 190, 134, 82, 84, 190, 6, 143, 202, 188, 32, 40, 38, 191, 189, 225, 185, 62, 22, 231, 174, 62, 229, 176, 128, 61, 157, 231, 151, 189, 20, 200, 75, 190, 94, 24, 187, 189, 119, 11, 75, 190, 49, 90, 21, 191, 75, 61, 173, 62, 158, 25, 33, 62, 34, 15, 63, 190, 51, 218, 55, 189, 39, 8, 90, 191, 137, 150, 113, 189, 98, 212, 252, 190, 220, 141, 51, 190, 157, 38, 163, 189, 106, 154, 153, 191, 75, 201, 201, 191, 11, 198, 20, 191, 226, 9, 161, 191, 85, 98, 142, 62, 156, 80, 74, 191, 183, 52, 192, 61, 178, 219, 183, 62, 148, 107, 78, 190, 139, 11, 91, 61, 122, 87, 21, 189, 135, 234, 87, 62, 33, 65, 46, 62, 101, 71, 218, 189, 113, 241, 136, 62, 62, 181, 132, 190, 188, 67, 22, 62, 219, 54, 60, 190, 59, 118, 13, 191, 173, 186, 161, 190, 161, 133, 122, 190, 191, 143, 156, 62, 154, 43, 162, 61, 119, 143, 95, 62, 108, 162, 26, 189, 147, 228, 9, 191, 115, 68, 118, 62, 21, 173, 127, 190, 82, 237, 6, 62, 31, 214, 19, 62, 200, 56, 62, 62, 96, 211, 28, 190, 106, 241, 159, 62, 204, 30, 9, 61, 197, 232, 185, 60, 89, 167, 209, 62, 23, 197, 61, 189, 174, 12, 107, 62, 96, 191, 243, 190, 224, 144, 230, 190, 215, 242, 228, 190, 140, 126, 197, 62, 78, 28, 39, 190, 40, 176, 31, 191, 241, 80, 226, 190, 238, 232, 135, 62, 3, 13, 95, 190, 68, 180, 109, 189, 246, 110, 135, 190, 166, 95, 192, 190, 8, 53, 100, 61, 10, 242, 18, 62, 212, 23, 184, 191, 87, 220, 73, 190, 196, 206, 211, 61, 62, 97, 8, 190, 5, 38, 194, 187, 160, 162, 104, 190, 108, 202, 175, 190, 40, 147, 178, 190, 129, 202, 8, 61, 34, 139, 145, 189, 69, 212, 213, 190, 121, 70, 192, 190, 198, 45, 114, 61, 200, 105, 185, 191, 75, 208, 24, 191, 176, 201, 155, 190, 18, 187, 62, 62, 212, 175, 242, 190, 237, 128, 196, 189, 108, 226, 102, 62, 151, 106, 148, 190, 237, 108, 92, 62, 213, 35, 221, 189, 237, 110, 3, 62, 188, 71, 135, 62, 110, 221, 151, 62, 60, 99, 87, 61, 126, 94, 77, 190, 219, 64, 5, 190, 69, 10, 173, 61, 155, 23, 228, 190, 194, 155, 148, 190, 228, 112, 122, 189, 4, 155, 205, 189, 192, 21, 162, 189, 95, 16, 177, 190, 60, 169, 9, 190, 141, 231, 255, 189, 118, 1, 49, 61, 202, 136, 5, 190, 180, 62, 40, 189, 165, 222, 179, 62, 59, 52, 94, 62, 236, 97, 162, 190, 51, 61, 1, 62, 228, 127, 158, 189, 102, 251, 154, 189, 131, 193, 100, 62, 91, 136, 227, 190, 138, 242, 25, 190, 221, 90, 243, 60, 180, 163, 105, 190, 215, 195, 139, 61, 29, 78, 17, 189, 31, 198, 40, 62, 105, 43, 232, 61, 217, 66, 8, 190, 56, 34, 1, 190, 253, 76, 144, 190, 134, 239, 145, 189, 81, 152, 76, 190, 251, 167, 235, 188, 240, 16, 80, 61, 200, 91, 128, 189, 254, 196, 153, 62, 223, 188, 184, 60, 250, 106, 163, 190, 62, 86, 198, 61, 117, 238, 167, 186, 58, 220, 225, 189, 193, 198, 238, 61, 66, 195, 185, 61, 228, 43, 84, 190, 37, 130, 96, 190, 119, 189, 169, 189, 95, 198, 193, 61, 72, 99, 190, 190, 194, 197, 123, 190, 224, 241, 177, 189, 122, 105, 187, 188, 230, 107, 140, 60, 103, 116, 168, 189, 89, 242, 16, 62, 128, 28, 224, 58, 47, 217, 92, 191, 27, 16, 97, 62, 128, 202, 108, 61, 103, 175, 27, 189, 44, 159, 231, 61, 74, 103, 54, 62, 114, 129, 109, 60, 139, 24, 28, 189, 53, 221, 104, 189, 97, 143, 179, 61, 93, 81, 204, 189, 134, 51, 2, 189, 24, 83, 4, 191, 134, 137, 152, 61, 73, 1, 32, 61, 60, 81, 29, 62, 17, 141, 233, 189, 183, 151, 109, 59, 240, 77, 44, 190, 58, 59, 29, 191, 99, 172, 18, 188, 36, 119, 79, 62, 254, 241, 192, 61, 7, 252, 207, 189, 170, 174, 150, 61, 225, 12, 74, 190, 192, 254, 137, 189, 183, 211, 122, 62, 147, 119, 51, 61, 127, 41, 162, 61, 32, 15, 105, 189, 184, 29, 151, 61, 7, 32, 102, 191, 84, 248, 111, 62, 54, 52, 138, 188, 36, 235, 101, 60, 23, 132, 164, 62, 241, 11, 152, 61, 53, 80, 55, 188, 162, 105, 148, 61, 198, 88, 25, 190, 27, 192, 28, 62, 162, 27, 8, 62, 44, 209, 234, 189, 184, 132, 138, 190, 99, 209, 250, 189, 125, 73, 19, 189, 66, 247, 38, 62, 95, 97, 166, 189, 250, 67, 175, 190, 119, 53, 34, 61, 17, 130, 38, 191, 200, 87, 175, 60, 51, 117, 52, 61, 40, 117, 194, 61, 240, 190, 66, 61, 34, 214, 214, 189, 168, 133, 234, 190, 136, 28, 138, 61, 119, 85, 89, 190, 130, 38, 228, 62, 165, 236, 62, 191, 203, 216, 69, 62, 86, 197, 200, 62, 233, 198, 116, 190, 111, 111, 9, 62, 170, 156, 25, 62, 27, 126, 13, 189, 180, 121, 36, 190, 115, 64, 82, 190, 55, 39, 138, 62, 43, 78, 104, 190, 95, 232, 207, 60, 45, 75, 176, 61, 140, 31, 111, 188, 69, 91, 54, 190, 158, 229, 160, 187, 197, 62, 226, 61, 122, 182, 149, 188, 1, 136, 100, 62, 37, 59, 163, 189, 209, 236, 28, 190, 133, 217, 17, 61, 95, 209, 130, 60, 10, 5, 35, 62, 213, 137, 165, 60, 205, 34, 44, 190, 237, 1, 20, 189, 2, 105, 156, 189, 31, 18, 109, 189, 152, 93, 9, 190, 52, 157, 36, 61, 112, 56, 25, 190, 80, 18, 218, 61, 143, 6, 232, 189, 46, 1, 21, 62, 153, 226, 41, 190, 31, 241, 86, 190, 208, 124, 11, 62, 183, 58, 29, 190, 93, 54, 52, 61, 152, 254, 56, 190, 158, 133, 16, 190, 101, 44, 30, 190, 79, 86, 189, 188, 6, 163, 252, 188, 105, 124, 138, 61, 80, 230, 192, 188, 118, 136, 28, 190, 173, 75, 102, 61, 138, 254, 66, 61, 249, 42, 2, 61, 28, 183, 58, 190, 57, 131, 22, 189, 215, 36, 191, 61, 208, 25, 232, 189, 227, 113, 63, 190, 236, 82, 85, 189, 187, 178, 53, 190, 126, 172, 251, 61, 199, 23, 188, 189, 114, 228, 196, 61, 104, 177, 15, 190, 39, 8, 144, 61, 205, 205, 93, 61, 107, 37, 154, 61, 126, 241, 31, 189, 153, 234, 28, 190, 248, 234, 23, 62, 143, 186, 92, 61, 37, 145, 224, 60, 69, 133, 231, 61, 138, 93, 103, 188, 197, 128, 55, 190, 128, 48, 185, 61, 100, 92, 181, 189, 18, 250, 232, 61, 83, 116, 168, 189, 209, 77, 141, 189, 254, 159, 192, 189, 192, 151, 139, 189, 61, 207, 235, 60, 171, 78, 47, 190, 191, 71, 2, 190, 58, 58, 12, 190, 176, 139, 9, 61, 77, 211, 42, 62, 27, 73, 160, 61, 147, 79, 20, 190, 68, 63, 160, 189, 70, 8, 204, 189, 187, 207, 137, 187, 142, 251, 236, 189, 226, 140, 8, 60, 242, 80, 140, 61, 83, 213, 74, 188, 4, 217, 44, 62, 170, 146, 36, 190, 235, 255, 183, 186, 35, 105, 146, 61, 198, 64, 209, 60, 219, 141, 198, 61, 114, 234, 71, 61, 65, 252, 103, 61, 10, 90, 27, 62, 23, 183, 52, 190, 132, 65, 16, 190, 28, 64, 133, 61, 219, 243, 36, 189, 115, 193, 236, 189, 251, 9, 220, 187, 181, 183, 174, 189, 24, 181, 186, 61, 110, 122, 175, 189, 253, 234, 43, 190, 132, 186, 207, 189, 175, 4, 23, 190, 39, 149, 246, 189, 162, 3, 15, 62, 152, 121, 45, 190, 154, 176, 194, 189, 123, 7, 182, 188, 32, 217, 123, 60, 83, 184, 170, 61, 242, 121, 241, 189, 194, 171, 213, 188, 241, 176, 107, 60, 125, 78, 132, 61, 155, 89, 188, 62, 165, 167, 252, 190, 200, 250, 169, 62, 2, 64, 37, 62, 40, 20, 24, 190, 240, 82, 73, 189, 40, 58, 170, 62, 38, 150, 221, 60, 120, 239, 12, 190, 220, 22, 233, 189, 156, 27, 68, 190, 178, 113, 105, 61, 121, 235, 77, 62, 139, 187, 231, 189, 97, 171, 199, 61, 97, 180, 126, 190, 150, 175, 145, 62, 21, 255, 191, 61, 255, 189, 159, 190, 255, 172, 212, 62, 154, 60, 187, 60, 206, 0, 134, 190, 148, 197, 138, 61, 56, 33, 102, 190, 206, 57, 157, 188, 64, 151, 181, 190, 21, 92, 69, 62, 52, 186, 28, 189, 48, 4, 68, 191, 251, 44, 6, 190, 7, 155, 128, 61, 200, 167, 25, 190, 174, 107, 182, 62, 34, 128, 117, 191, 140, 19, 201, 62, 85, 118, 145, 62, 172, 190, 75, 189, 110, 241, 103, 62, 55, 73, 96, 62, 245, 123, 234, 189, 229, 246, 208, 190, 21, 59, 168, 189, 218, 141, 4, 189, 246, 121, 243, 60, 103, 234, 60, 62, 176, 123, 107, 189, 115, 101, 88, 190, 117, 68, 22, 190, 227, 88, 60, 62, 172, 136, 199, 189, 74, 160, 92, 190, 171, 6, 166, 62, 66, 62, 173, 189, 242, 9, 142, 60, 140, 95, 200, 188, 9, 22, 41, 61, 238, 36, 36, 61, 77, 230, 98, 190, 135, 84, 149, 61, 143, 39, 104, 62, 146, 196, 11, 191, 10, 141, 31, 62, 149, 184, 146, 60, 20, 107, 79, 62, 203, 187, 100, 190, 43, 40, 97, 62, 13, 193, 223, 60, 32, 84, 5, 189, 83, 159, 176, 187, 108, 126, 13, 61, 155, 27, 213, 189, 57, 195, 70, 62, 25, 53, 211, 62, 235, 172, 140, 188, 38, 223, 202, 190, 168, 201, 14, 62, 88, 38, 74, 190, 146, 175, 187, 61, 186, 161, 251, 61, 68, 209, 91, 62, 158, 200, 186, 62, 106, 235, 248, 189, 209, 124, 33, 62, 255, 211, 25, 190, 124, 39, 193, 189, 101, 183, 116, 61, 206, 65, 43, 190, 196, 139, 230, 189, 190, 152, 219, 189, 175, 233, 150, 61, 57, 52, 9, 190, 132, 103, 38, 62, 213, 200, 112, 61};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 32, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace biases {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {243, 22, 208, 189, 195, 76, 241, 189, 148, 65, 175, 62, 73, 82, 111, 62, 165, 111, 15, 62, 183, 151, 124, 188, 205, 150, 93, 62, 49, 152, 10, 62, 84, 235, 96, 60, 91, 112, 64, 62, 78, 121, 115, 62, 68, 121, 165, 61, 57, 54, 78, 188, 115, 181, 35, 190, 27, 149, 208, 189, 217, 217, 49, 61, 204, 132, 174, 189, 95, 78, 117, 189, 55, 63, 41, 62, 146, 226, 233, 61, 149, 131, 93, 62, 81, 176, 248, 189, 183, 11, 135, 190, 21, 11, 152, 62, 169, 11, 149, 62, 255, 186, 98, 61, 209, 229, 210, 61, 214, 139, 73, 190, 110, 38, 236, 61, 195, 19, 59, 189, 198, 117, 99, 186, 33, 218, 181, 190};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_1 {
        using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Specification<float, unsigned long, 32, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::RELU, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamicTag, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>; 
        template <typename CAPABILITY>
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        const TYPE layer = {weights::parameters, biases::parameters};
    }
    namespace layer_2 {
        namespace weights {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {171, 145, 39, 191, 183, 78, 44, 190, 75, 79, 21, 189, 67, 244, 83, 191, 176, 213, 22, 191, 254, 2, 157, 60, 139, 66, 232, 62, 72, 242, 8, 189, 194, 18, 35, 188, 1, 167, 40, 191, 170, 125, 239, 61, 40, 114, 52, 190, 247, 21, 93, 62, 206, 93, 146, 58, 166, 173, 12, 63, 190, 123, 30, 190, 72, 60, 175, 62, 132, 182, 94, 189, 65, 108, 83, 63, 105, 131, 89, 63, 148, 0, 129, 191, 114, 189, 30, 63, 118, 94, 99, 190, 211, 186, 4, 189, 194, 47, 141, 187, 140, 72, 5, 63, 158, 8, 198, 189, 5, 145, 132, 61, 75, 167, 9, 188, 147, 224, 2, 63, 104, 76, 225, 62, 149, 41, 34, 62, 109, 205, 142, 62, 19, 50, 44, 189, 92, 91, 127, 190, 14, 97, 123, 62, 117, 59, 143, 186, 207, 205, 112, 189, 223, 158, 142, 60, 61, 210, 172, 190, 49, 213, 169, 189, 223, 204, 211, 189, 89, 39, 73, 190, 150, 117, 121, 190, 234, 232, 109, 189, 95, 166, 105, 189, 78, 113, 204, 189, 216, 157, 58, 61, 20, 6, 234, 61, 255, 173, 150, 61, 51, 35, 152, 190, 104, 241, 10, 62, 169, 39, 4, 62, 86, 201, 137, 62, 231, 146, 178, 62, 190, 67, 48, 190, 190, 209, 44, 190, 33, 3, 24, 62, 5, 211, 112, 189, 114, 221, 60, 61, 186, 19, 50, 62, 67, 8, 22, 189, 193, 115, 82, 62, 35, 1, 218, 61};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 2, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace biases {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {109, 152, 71, 190, 200, 192, 142, 190};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_2 {
        using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Specification<float, unsigned long, 32, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::IDENTITY, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamicTag, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>; 
        template <typename CAPABILITY>
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        const TYPE layer = {weights::parameters, biases::parameters};
    }
    namespace model_definition {
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward; 
        using IF = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn_models::sequential::Interface<CAPABILITY>;
        using MODEL = IF::Module<layer_0::TEMPLATE, IF::Module<layer_1::TEMPLATE, IF::Module<layer_2::TEMPLATE>>>;
    }
    using MODEL = model_definition::MODEL;
    const MODEL model = {layer_0::layer, {layer_1::layer, {layer_2::layer, {}}}};
}
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::input {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {183, 79, 204, 58, 137, 199, 103, 191, 9, 28, 149, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {36, 195, 216, 63, 154, 155, 129, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0098/steps/000000000012000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
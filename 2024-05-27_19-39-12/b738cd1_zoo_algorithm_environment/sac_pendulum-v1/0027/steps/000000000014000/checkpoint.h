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
                alignas(float) const unsigned char memory[] = {90, 33, 122, 62, 244, 31, 12, 191, 87, 237, 195, 62, 40, 4, 198, 189, 191, 97, 184, 191, 52, 185, 198, 190, 56, 163, 119, 190, 92, 68, 32, 62, 38, 38, 132, 190, 173, 241, 194, 62, 81, 35, 20, 62, 5, 236, 36, 63, 154, 52, 123, 191, 239, 96, 84, 63, 5, 128, 203, 61, 100, 103, 84, 62, 76, 20, 211, 191, 20, 26, 226, 190, 159, 176, 0, 62, 193, 199, 162, 190, 140, 167, 95, 190, 247, 243, 11, 63, 38, 216, 167, 190, 190, 86, 94, 190, 154, 104, 83, 190, 128, 63, 107, 191, 187, 3, 170, 190, 126, 53, 27, 191, 42, 138, 1, 63, 179, 58, 163, 190, 234, 190, 192, 62, 10, 150, 177, 191, 247, 147, 200, 190, 39, 134, 38, 190, 138, 57, 195, 63, 52, 158, 208, 62, 118, 220, 49, 191, 190, 235, 241, 190, 121, 236, 1, 62, 144, 95, 97, 62, 136, 103, 117, 191, 198, 242, 145, 62, 73, 76, 97, 191, 112, 70, 14, 61, 104, 55, 206, 61, 89, 76, 6, 191, 58, 155, 108, 63, 239, 103, 3, 63, 88, 228, 220, 62, 10, 105, 18, 190, 147, 45, 31, 190, 168, 245, 191, 190, 216, 65, 141, 191, 209, 58, 171, 62, 37, 87, 99, 62, 3, 9, 163, 189, 145, 57, 21, 191, 102, 105, 225, 190, 114, 205, 174, 190, 249, 83, 141, 60, 110, 245, 239, 62, 152, 58, 137, 191, 254, 210, 93, 190, 59, 52, 229, 62, 89, 240, 244, 190, 157, 44, 106, 190, 233, 121, 130, 62, 76, 98, 147, 62, 68, 1, 202, 60, 215, 172, 86, 190, 65, 211, 130, 63, 214, 32, 65, 62, 57, 197, 224, 62, 11, 167, 91, 63, 65, 116, 87, 62, 185, 170, 83, 191, 64, 58, 174, 61, 76, 243, 57, 63, 107, 92, 193, 190, 32, 169, 138, 63, 65, 76, 2, 63, 74, 201, 115, 63, 209, 89, 137, 63, 6, 58, 233, 62, 127, 85, 254, 62, 33, 208, 10, 63, 140, 202, 41, 190, 93, 177, 21, 63, 92, 125, 80, 191, 71, 11, 152, 61, 102, 101, 170, 62, 97, 166, 5, 191, 215, 223, 107, 62, 148, 146, 12, 62, 223, 237, 14, 191, 246, 254, 154, 62};
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
                alignas(float) const unsigned char memory[] = {17, 198, 39, 191, 30, 51, 167, 62, 97, 222, 49, 191, 89, 246, 223, 189, 252, 198, 21, 63, 90, 242, 157, 61, 170, 231, 247, 61, 71, 48, 2, 190, 117, 24, 159, 190, 53, 194, 56, 62, 118, 33, 150, 62, 142, 241, 178, 62, 51, 100, 242, 62, 211, 12, 18, 61, 82, 41, 0, 63, 246, 27, 35, 190, 109, 77, 192, 62, 130, 121, 85, 189, 246, 90, 160, 62, 234, 123, 66, 190, 56, 133, 155, 190, 177, 46, 202, 190, 197, 93, 7, 63, 224, 110, 197, 62, 127, 187, 26, 190, 254, 189, 14, 191, 182, 37, 59, 190, 41, 64, 174, 62, 36, 124, 10, 62, 201, 22, 143, 62, 136, 166, 131, 62, 152, 255, 3, 63};
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
                alignas(float) const unsigned char memory[] = {47, 51, 37, 62, 255, 12, 172, 61, 243, 2, 11, 188, 101, 19, 215, 188, 135, 231, 238, 189, 172, 236, 23, 62, 222, 21, 224, 61, 192, 189, 238, 61, 138, 60, 195, 189, 28, 57, 90, 60, 250, 161, 199, 61, 71, 244, 98, 187, 94, 201, 88, 62, 247, 208, 222, 188, 205, 233, 19, 190, 106, 13, 50, 61, 153, 162, 217, 189, 223, 17, 10, 62, 222, 216, 253, 61, 1, 128, 15, 190, 107, 205, 71, 189, 35, 29, 56, 62, 154, 165, 77, 62, 55, 22, 210, 61, 144, 101, 109, 62, 254, 74, 78, 62, 120, 120, 160, 61, 165, 22, 32, 62, 176, 127, 122, 190, 211, 111, 57, 61, 83, 107, 48, 189, 3, 28, 118, 62, 22, 178, 213, 61, 21, 184, 101, 62, 89, 172, 213, 60, 137, 122, 160, 190, 135, 174, 240, 189, 52, 83, 153, 62, 29, 36, 70, 61, 11, 244, 240, 61, 137, 182, 86, 61, 73, 208, 118, 188, 142, 106, 40, 62, 6, 54, 65, 191, 26, 7, 8, 63, 41, 148, 77, 62, 181, 151, 72, 62, 131, 148, 103, 60, 243, 32, 176, 62, 137, 225, 113, 62, 54, 66, 148, 61, 120, 242, 178, 62, 115, 15, 217, 61, 218, 162, 55, 190, 35, 228, 148, 189, 161, 73, 112, 191, 170, 84, 167, 191, 59, 212, 141, 189, 186, 59, 206, 190, 47, 184, 9, 191, 209, 9, 148, 189, 36, 124, 198, 61, 222, 109, 200, 62, 116, 60, 140, 62, 138, 181, 151, 62, 61, 66, 29, 61, 29, 222, 50, 189, 96, 138, 60, 189, 147, 25, 66, 191, 190, 203, 147, 189, 147, 118, 42, 62, 40, 82, 78, 62, 144, 74, 128, 62, 237, 89, 107, 62, 7, 27, 166, 189, 70, 66, 184, 191, 127, 131, 78, 190, 195, 131, 20, 62, 128, 156, 85, 191, 28, 47, 138, 190, 55, 157, 24, 62, 230, 74, 20, 190, 50, 133, 191, 61, 206, 90, 177, 190, 232, 219, 89, 190, 95, 82, 96, 61, 16, 178, 75, 62, 178, 249, 247, 190, 223, 198, 42, 190, 15, 66, 191, 61, 47, 12, 185, 190, 35, 101, 74, 62, 187, 51, 113, 62, 159, 206, 61, 62, 237, 56, 196, 61, 100, 44, 214, 61, 214, 86, 253, 189, 161, 28, 114, 61, 204, 206, 218, 189, 49, 169, 191, 60, 220, 85, 0, 191, 217, 71, 222, 61, 56, 126, 171, 61, 222, 100, 134, 62, 196, 241, 41, 190, 219, 80, 207, 189, 225, 201, 43, 62, 53, 231, 202, 191, 43, 131, 83, 62, 179, 194, 102, 62, 167, 158, 38, 190, 74, 25, 74, 190, 60, 122, 64, 62, 184, 11, 147, 62, 240, 73, 35, 62, 102, 132, 56, 189, 138, 199, 191, 61, 154, 175, 159, 189, 32, 93, 20, 61, 7, 193, 27, 191, 152, 241, 175, 190, 61, 34, 145, 190, 130, 89, 14, 191, 16, 43, 44, 189, 68, 19, 37, 62, 190, 175, 214, 61, 170, 70, 207, 62, 162, 240, 13, 62, 219, 123, 146, 190, 214, 79, 112, 189, 122, 66, 180, 189, 97, 193, 47, 190, 129, 253, 50, 61, 111, 26, 148, 61, 226, 248, 25, 62, 110, 114, 112, 60, 190, 63, 24, 62, 150, 96, 159, 187, 171, 129, 71, 59, 159, 162, 196, 61, 95, 222, 245, 61, 21, 94, 53, 61, 250, 172, 42, 62, 246, 69, 220, 61, 207, 33, 157, 62, 115, 181, 186, 61, 47, 224, 21, 62, 86, 19, 52, 189, 39, 212, 34, 190, 61, 44, 9, 189, 38, 140, 39, 62, 137, 89, 6, 62, 127, 203, 68, 61, 159, 142, 21, 62, 46, 213, 23, 190, 199, 217, 252, 61, 200, 82, 72, 62, 13, 1, 19, 61, 66, 171, 167, 61, 152, 239, 7, 62, 53, 225, 62, 62, 104, 75, 190, 190, 148, 254, 26, 190, 28, 182, 89, 62, 247, 168, 85, 190, 83, 101, 196, 190, 5, 120, 155, 190, 55, 206, 44, 191, 116, 194, 225, 61, 6, 204, 178, 62, 243, 89, 30, 191, 177, 94, 156, 60, 111, 44, 217, 190, 83, 97, 26, 62, 153, 108, 237, 190, 194, 178, 150, 189, 91, 20, 169, 190, 25, 5, 14, 61, 69, 139, 127, 62, 46, 8, 239, 189, 253, 17, 227, 190, 28, 64, 253, 189, 52, 121, 19, 190, 27, 209, 148, 188, 28, 37, 235, 62, 0, 6, 23, 190, 70, 76, 207, 61, 145, 31, 154, 62, 206, 245, 64, 63, 24, 183, 112, 62, 137, 15, 12, 62, 75, 68, 162, 61, 224, 33, 54, 61, 124, 25, 97, 188, 81, 142, 175, 61, 43, 158, 35, 61, 185, 73, 98, 189, 215, 253, 31, 190, 96, 173, 5, 61, 200, 40, 135, 190, 249, 146, 152, 62, 133, 112, 148, 62, 49, 184, 173, 189, 126, 94, 137, 190, 237, 137, 0, 61, 17, 51, 193, 189, 240, 70, 3, 62, 216, 67, 208, 190, 105, 0, 171, 189, 58, 37, 39, 190, 175, 216, 113, 61, 6, 70, 175, 62, 170, 21, 21, 191, 118, 38, 195, 190, 44, 118, 99, 62, 169, 13, 93, 61, 154, 22, 174, 62, 24, 20, 222, 190, 1, 185, 142, 190, 77, 200, 149, 62, 204, 189, 22, 189, 131, 108, 12, 61, 23, 193, 62, 189, 28, 118, 200, 187, 192, 144, 203, 190, 156, 29, 130, 190, 177, 224, 167, 62, 193, 46, 51, 190, 46, 44, 162, 61, 153, 115, 218, 189, 54, 118, 103, 189, 215, 29, 4, 190, 250, 152, 247, 61, 6, 78, 42, 62, 141, 100, 190, 189, 98, 202, 246, 61, 125, 28, 0, 62, 88, 166, 194, 189, 52, 126, 121, 61, 58, 73, 0, 62, 78, 165, 226, 61, 169, 107, 159, 190, 45, 37, 218, 188, 205, 229, 121, 190, 139, 16, 194, 190, 114, 123, 62, 189, 198, 147, 118, 62, 123, 150, 246, 60, 108, 78, 143, 62, 71, 13, 34, 190, 3, 63, 13, 62, 206, 137, 200, 61, 146, 204, 167, 61, 46, 23, 17, 190, 198, 160, 98, 61, 44, 175, 93, 62, 143, 222, 231, 189, 156, 133, 213, 189, 141, 252, 151, 61, 168, 145, 64, 189, 80, 50, 5, 191, 154, 101, 123, 61, 32, 32, 9, 190, 203, 98, 163, 62, 36, 222, 101, 189, 67, 241, 16, 190, 3, 229, 10, 62, 112, 79, 204, 191, 70, 158, 93, 62, 135, 16, 231, 62, 82, 157, 53, 190, 105, 161, 96, 190, 114, 49, 176, 62, 154, 58, 31, 62, 180, 110, 4, 62, 235, 18, 43, 62, 189, 145, 18, 62, 186, 171, 191, 188, 1, 252, 51, 62, 142, 149, 175, 190, 206, 163, 5, 191, 73, 56, 88, 190, 109, 150, 46, 191, 101, 231, 86, 190, 167, 240, 132, 62, 120, 2, 143, 62, 150, 22, 157, 62, 163, 110, 208, 61, 7, 213, 229, 61, 52, 149, 129, 190, 236, 176, 136, 62, 136, 139, 101, 62, 40, 216, 129, 190, 200, 88, 106, 190, 145, 84, 156, 61, 177, 127, 170, 190, 234, 48, 187, 60, 25, 185, 52, 61, 134, 23, 231, 60, 115, 71, 204, 189, 170, 4, 43, 190, 86, 191, 158, 61, 246, 228, 201, 190, 180, 129, 80, 61, 77, 133, 165, 190, 139, 88, 0, 190, 145, 180, 131, 62, 24, 35, 217, 61, 230, 34, 134, 191, 177, 66, 214, 190, 151, 130, 99, 62, 191, 11, 86, 57, 209, 252, 202, 62, 38, 37, 238, 185, 177, 195, 157, 189, 78, 138, 249, 62, 136, 109, 113, 62, 224, 76, 164, 189, 59, 201, 229, 189, 255, 128, 134, 61, 120, 79, 140, 62, 218, 253, 93, 62, 58, 100, 164, 190, 217, 122, 107, 62, 70, 154, 52, 60, 46, 203, 41, 62, 109, 200, 254, 61, 32, 87, 223, 61, 76, 224, 19, 188, 25, 249, 67, 61, 150, 46, 163, 62, 234, 208, 138, 189, 77, 240, 145, 61, 92, 254, 229, 189, 149, 249, 115, 62, 180, 251, 66, 62, 173, 35, 52, 189, 68, 153, 17, 187, 104, 35, 127, 61, 217, 219, 18, 60, 44, 130, 143, 62, 103, 91, 136, 62, 68, 209, 163, 190, 68, 237, 30, 62, 166, 110, 86, 189, 108, 145, 138, 62, 61, 168, 18, 62, 168, 130, 155, 190, 246, 5, 17, 191, 181, 126, 59, 62, 8, 2, 181, 61, 22, 56, 239, 61, 39, 21, 80, 60, 175, 146, 137, 190, 137, 21, 40, 190, 25, 125, 220, 190, 121, 109, 11, 190, 78, 16, 223, 190, 104, 85, 223, 61, 110, 225, 192, 61, 145, 55, 201, 190, 137, 234, 207, 188, 247, 31, 197, 189, 206, 234, 184, 190, 104, 190, 177, 61, 121, 112, 149, 62, 189, 143, 132, 62, 57, 180, 76, 61, 228, 19, 3, 62, 245, 40, 48, 62, 103, 215, 76, 61, 63, 115, 60, 62, 146, 224, 152, 189, 195, 89, 191, 186, 37, 242, 27, 62, 136, 88, 189, 190, 252, 200, 24, 191, 173, 155, 140, 61, 216, 202, 213, 61, 58, 131, 76, 190, 53, 137, 0, 62, 24, 164, 107, 61, 11, 233, 23, 62, 243, 200, 2, 62, 187, 25, 100, 190, 96, 155, 139, 191, 86, 202, 3, 191, 249, 14, 8, 191, 47, 134, 103, 62, 250, 230, 197, 190, 148, 193, 82, 62, 82, 92, 252, 61, 85, 117, 182, 190, 196, 154, 187, 61, 33, 116, 90, 190, 53, 11, 109, 62, 198, 108, 235, 189, 24, 42, 178, 190, 198, 248, 1, 61, 82, 137, 129, 190, 124, 232, 145, 62, 69, 229, 140, 190, 168, 29, 18, 61, 183, 98, 240, 61, 168, 170, 209, 190, 23, 76, 131, 60, 122, 220, 131, 188, 219, 30, 28, 61, 4, 120, 67, 190, 60, 100, 185, 190, 109, 93, 11, 190, 34, 209, 128, 61, 103, 176, 22, 61, 48, 104, 16, 62, 166, 151, 7, 191, 192, 4, 171, 190, 51, 81, 27, 190, 127, 67, 211, 60, 25, 100, 143, 188, 94, 40, 243, 61, 157, 253, 51, 189, 44, 140, 206, 189, 134, 104, 57, 62, 103, 89, 5, 190, 141, 87, 37, 61, 119, 188, 31, 62, 25, 236, 19, 62, 152, 200, 255, 189, 131, 219, 125, 62, 77, 85, 6, 62, 143, 73, 178, 189, 153, 179, 222, 61, 89, 199, 95, 189, 225, 104, 168, 61, 233, 182, 175, 61, 169, 40, 158, 189, 178, 218, 93, 187, 127, 172, 194, 189, 51, 132, 181, 61, 155, 239, 4, 62, 49, 37, 136, 62, 229, 21, 85, 189, 212, 44, 68, 62, 153, 255, 82, 62, 60, 192, 232, 189, 169, 31, 208, 61, 165, 97, 214, 61, 86, 0, 131, 62, 94, 65, 54, 190, 185, 67, 130, 62, 199, 97, 129, 190, 55, 231, 226, 190, 7, 65, 17, 62, 247, 253, 171, 191, 7, 51, 148, 191, 108, 230, 12, 189, 174, 63, 138, 191, 53, 147, 147, 61, 109, 254, 175, 191, 43, 204, 102, 62, 88, 0, 149, 188, 54, 156, 171, 189, 209, 177, 52, 62, 112, 120, 158, 189, 143, 133, 128, 191, 39, 39, 130, 189, 201, 199, 30, 191, 70, 80, 176, 190, 125, 112, 196, 61, 87, 47, 253, 61, 190, 77, 54, 189, 168, 205, 170, 62, 230, 22, 177, 61, 148, 182, 23, 61, 167, 19, 51, 62, 15, 69, 61, 190, 173, 13, 28, 191, 104, 252, 35, 191, 142, 39, 146, 190, 88, 140, 249, 190, 58, 146, 19, 188, 210, 72, 139, 190, 180, 245, 18, 190, 203, 22, 218, 61, 119, 236, 140, 191, 72, 227, 178, 190, 11, 169, 98, 61, 221, 48, 10, 190, 36, 250, 55, 190, 202, 172, 15, 190, 9, 138, 140, 187, 108, 125, 138, 191, 66, 186, 114, 190, 20, 21, 151, 187, 75, 46, 249, 188, 68, 43, 140, 190, 86, 190, 99, 62, 60, 70, 45, 60, 99, 32, 107, 190, 130, 35, 138, 190, 212, 111, 219, 191, 115, 127, 231, 190, 228, 8, 222, 188, 69, 66, 20, 191, 136, 219, 62, 61, 42, 9, 2, 189, 3, 244, 208, 189, 7, 167, 114, 61, 137, 241, 154, 187, 9, 151, 175, 61, 77, 155, 192, 189, 70, 10, 31, 62, 180, 209, 141, 190, 123, 122, 2, 61, 89, 49, 135, 189, 80, 250, 191, 190, 198, 21, 27, 62, 61, 70, 189, 189, 213, 51, 129, 59, 30, 221, 32, 62, 84, 41, 212, 189, 92, 238, 44, 189, 145, 72, 200, 60, 47, 115, 95, 62, 32, 176, 249, 61, 237, 40, 199, 62, 159, 156, 244, 60, 99, 56, 253, 61, 96, 189, 21, 62, 60, 230, 121, 62, 121, 92, 3, 60, 49, 128, 62, 190, 35, 160, 96, 189, 2, 208, 214, 61, 24, 211, 99, 188, 169, 174, 136, 189, 150, 69, 209, 190, 211, 35, 154, 189, 115, 157, 170, 189, 129, 156, 185, 190, 30, 189, 164, 61, 46, 83, 58, 62, 86, 85, 172, 62, 41, 242, 145, 189, 103, 24, 75, 62, 32, 170, 222, 61, 161, 160, 172, 189, 78, 46, 36, 190, 129, 76, 116, 62, 83, 53, 161, 62, 23, 95, 222, 61, 190, 6, 26, 62, 107, 37, 200, 61, 47, 68, 253, 61, 44, 219, 130, 61, 170, 52, 80, 61, 19, 18, 19, 63, 26, 191, 16, 191, 15, 114, 45, 62, 106, 22, 86, 190, 154, 24, 188, 189, 197, 254, 246, 189, 205, 21, 246, 61, 47, 106, 61, 63, 178, 253, 29, 190, 136, 230, 4, 189, 10, 207, 151, 62, 107, 119, 205, 62, 254, 155, 144, 62, 62, 229, 201, 190, 8, 0, 245, 189, 137, 131, 80, 61, 83, 16, 5, 190, 35, 4, 166, 61, 179, 105, 198, 189, 226, 46, 157, 61, 8, 189, 179, 188, 160, 1, 72, 190, 85, 247, 241, 188, 11, 114, 190, 189, 59, 75, 245, 60, 41, 61, 65, 190, 133, 60, 128, 59, 136, 181, 103, 61, 142, 47, 41, 59, 115, 40, 253, 60, 18, 155, 196, 59, 53, 35, 89, 190, 206, 92, 89, 62, 135, 94, 21, 190, 24, 185, 36, 62, 181, 154, 7, 60, 171, 214, 152, 189, 34, 31, 53, 62, 162, 182, 136, 188, 143, 135, 82, 60, 168, 202, 54, 60, 82, 255, 228, 189, 14, 94, 202, 187, 155, 113, 52, 190, 10, 33, 252, 189, 166, 178, 240, 189, 252, 95, 89, 190, 74, 101, 107, 189, 142, 65, 142, 190, 121, 19, 193, 61, 1, 153, 75, 190, 5, 90, 107, 62, 219, 253, 223, 189, 141, 205, 2, 189, 200, 154, 105, 61, 130, 122, 109, 61, 31, 106, 221, 189, 220, 240, 50, 190, 235, 223, 169, 188, 7, 135, 199, 61, 128, 93, 81, 189, 184, 199, 83, 61, 234, 185, 173, 189, 195, 134, 207, 189, 58, 37, 145, 188, 56, 89, 224, 189, 213, 59, 34, 60, 85, 232, 39, 190, 174, 186, 104, 60, 247, 114, 31, 61, 77, 5, 215, 189, 207, 66, 166, 189, 163, 168, 210, 189, 214, 157, 196, 61, 11, 219, 192, 189, 23, 7, 126, 58, 130, 129, 48, 60, 110, 246, 172, 188, 161, 56, 22, 61, 221, 62, 9, 190, 93, 192, 17, 190, 112, 72, 249, 60, 181, 232, 127, 61, 119, 108, 224, 61, 230, 82, 35, 190, 128, 53, 163, 187, 34, 205, 132, 62, 108, 129, 242, 188, 129, 138, 181, 190, 152, 75, 92, 61, 182, 41, 224, 189, 230, 150, 200, 61, 13, 227, 153, 189, 28, 16, 143, 190, 132, 47, 2, 62, 66, 127, 33, 191, 198, 46, 177, 187, 52, 70, 78, 62, 244, 248, 14, 61, 217, 158, 47, 190, 105, 89, 233, 61, 116, 71, 178, 62, 224, 244, 6, 61, 42, 21, 176, 62, 193, 166, 11, 61, 52, 245, 119, 62, 254, 13, 1, 190, 220, 219, 32, 191, 225, 83, 70, 191, 65, 49, 103, 189, 109, 180, 185, 190, 225, 114, 41, 190, 85, 43, 152, 61, 17, 7, 243, 61, 32, 252, 78, 61, 157, 129, 86, 62, 125, 48, 53, 63, 240, 8, 24, 62, 14, 104, 173, 190, 111, 35, 229, 62, 213, 34, 151, 61, 248, 53, 153, 62, 170, 209, 158, 61, 76, 15, 134, 62, 15, 30, 49, 189, 216, 61, 232, 189, 145, 1, 137, 62, 119, 171, 240, 190, 49, 35, 80, 62, 33, 223, 160, 189, 181, 230, 40, 61, 234, 238, 66, 191, 49, 181, 36, 62, 129, 189, 214, 61, 226, 61, 133, 189, 29, 206, 219, 61, 114, 14, 121, 61, 69, 253, 1, 62, 227, 133, 145, 190, 84, 227, 65, 190, 169, 178, 19, 191, 62, 161, 29, 191, 85, 99, 138, 191, 131, 109, 150, 191, 30, 94, 165, 190, 74, 158, 193, 62, 88, 177, 217, 189, 226, 241, 171, 188, 217, 101, 104, 190, 91, 235, 147, 62, 194, 177, 40, 63, 185, 213, 187, 187, 181, 191, 181, 62, 174, 47, 154, 191, 238, 53, 193, 190, 119, 85, 51, 191, 7, 172, 136, 191, 56, 97, 118, 62, 255, 203, 95, 191, 235, 7, 84, 62, 247, 127, 7, 190, 230, 112, 85, 61, 182, 37, 127, 62, 75, 162, 143, 59, 48, 193, 208, 61, 133, 30, 185, 60, 235, 191, 178, 61, 127, 156, 34, 190, 78, 194, 159, 190, 57, 159, 106, 61, 233, 91, 205, 61, 179, 186, 244, 61, 70, 35, 84, 61, 216, 209, 141, 61, 111, 186, 122, 62, 6, 123, 130, 189, 154, 208, 174, 61, 146, 49, 160, 60, 58, 217, 7, 62, 56, 98, 36, 190, 81, 181, 132, 62, 26, 148, 48, 61, 191, 60, 152, 62, 107, 83, 8, 62, 225, 28, 34, 191, 125, 50, 171, 189, 114, 193, 67, 62, 206, 108, 128, 61, 70, 227, 141, 190, 70, 142, 106, 61, 46, 88, 133, 188, 183, 201, 115, 191, 29, 254, 198, 190, 237, 95, 207, 62, 9, 139, 138, 191, 221, 121, 116, 190, 175, 153, 47, 62, 7, 175, 170, 188, 196, 78, 99, 62, 133, 154, 147, 189, 202, 53, 11, 60, 42, 247, 228, 62, 232, 73, 246, 189, 208, 103, 161, 191, 21, 106, 74, 191, 155, 217, 147, 189, 51, 77, 146, 190, 182, 164, 211, 190, 217, 150, 130, 62, 252, 219, 142, 62, 180, 52, 166, 62, 241, 56, 38, 62, 162, 180, 235, 61, 50, 100, 31, 188, 95, 79, 68, 189, 105, 76, 238, 189, 110, 155, 216, 60, 234, 72, 176, 189, 200, 110, 204, 189, 16, 191, 103, 61, 10, 141, 29, 190, 216, 248, 201, 60, 62, 126, 17, 62, 16, 119, 4, 189, 77, 144, 36, 190, 59, 229, 60, 187, 143, 129, 46, 189, 183, 198, 47, 190, 25, 215, 231, 188, 65, 228, 148, 189, 9, 32, 40, 190, 227, 164, 100, 61, 101, 0, 0, 62, 124, 118, 155, 189, 32, 52, 186, 61, 11, 37, 254, 188, 234, 77, 215, 189, 189, 194, 44, 190, 249, 191, 50, 190, 11, 95, 4, 190, 217, 216, 155, 59, 41, 53, 165, 189, 26, 140, 10, 62, 131, 130, 43, 59, 176, 5, 220, 62, 190, 96, 190, 189, 37, 50, 73, 62, 77, 7, 92, 62, 52, 10, 52, 62, 62, 171, 62, 190, 14, 111, 116, 61, 108, 31, 98, 190, 144, 38, 75, 62, 254, 33, 16, 62, 40, 163, 21, 190, 17, 209, 92, 190, 177, 26, 26, 62, 217, 195, 153, 190, 183, 124, 67, 62, 145, 133, 47, 191, 176, 179, 85, 190, 200, 3, 158, 61, 169, 87, 138, 61, 5, 170, 19, 62, 225, 190, 116, 191, 67, 75, 27, 191, 106, 90, 97, 61, 241, 109, 15, 62, 254, 112, 150, 62, 192, 148, 61, 191, 28, 195, 46, 191, 233, 198, 179, 62, 80, 33, 67, 61, 85, 96, 45, 190, 162, 85, 181, 189, 41, 101, 5, 188, 179, 60, 134, 189, 11, 107, 127, 61, 39, 204, 128, 62, 25, 239, 55, 190, 225, 208, 189, 61, 170, 72, 179, 191, 228, 172, 2, 191, 94, 197, 159, 190, 148, 96, 191, 191, 131, 132, 30, 62, 156, 208, 99, 191, 29, 251, 41, 62, 214, 34, 98, 62, 233, 157, 44, 189, 200, 161, 133, 62, 43, 162, 193, 60, 101, 160, 225, 188, 9, 213, 72, 62, 23, 249, 34, 190, 201, 188, 128, 189, 24, 85, 235, 189, 5, 67, 135, 62, 239, 124, 71, 190, 66, 89, 89, 61, 92, 111, 184, 190, 157, 121, 38, 62, 49, 27, 138, 60, 252, 88, 88, 190, 219, 224, 148, 190, 168, 4, 167, 190, 72, 6, 239, 61, 29, 68, 26, 190, 148, 242, 91, 62, 219, 176, 132, 62, 56, 220, 36, 62, 93, 186, 195, 62, 211, 103, 174, 190, 16, 108, 8, 62, 44, 71, 2, 190, 230, 39, 69, 189, 157, 164, 6, 62, 176, 15, 117, 62, 96, 60, 241, 59, 171, 254, 190, 190, 184, 36, 249, 61, 38, 99, 90, 190, 141, 130, 233, 189, 253, 239, 87, 190, 84, 95, 20, 61, 152, 179, 197, 188, 176, 172, 181, 61, 108, 233, 80, 62, 52, 35, 71, 190, 115, 76, 146, 189, 181, 54, 88, 190, 106, 3, 68, 190, 211, 22, 123, 62, 194, 37, 6, 190, 38, 177, 195, 190, 151, 234, 134, 62, 243, 164, 151, 189, 72, 147, 236, 61, 186, 114, 181, 187, 91, 140, 104, 62, 85, 64, 42, 190, 103, 234, 231, 189, 61, 98, 233, 61, 167, 88, 111, 189, 159, 48, 198, 61, 88, 228, 38, 62, 52, 36, 53, 190, 165, 38, 223, 61, 124, 211, 234, 60, 192, 96, 43, 190, 102, 33, 46, 190, 57, 111, 178, 189, 41, 16, 1, 190, 61, 108, 143, 61, 32, 187, 190, 189, 145, 129, 208, 189, 222, 38, 127, 61, 124, 177, 154, 61, 92, 200, 172, 61, 23, 86, 21, 62, 10, 69, 170, 189, 125, 82, 199, 61, 96, 188, 146, 189, 94, 99, 195, 189, 132, 53, 40, 190, 124, 196, 192, 60, 160, 199, 138, 61, 121, 153, 117, 188, 126, 146, 12, 62, 23, 57, 158, 189, 78, 134, 23, 190, 121, 224, 190, 61, 132, 77, 36, 61, 36, 172, 189, 189, 236, 254, 240, 61, 87, 228, 109, 189, 19, 114, 14, 190, 139, 38, 153, 61, 253, 57, 205, 189, 52, 172, 186, 61, 40, 25, 123, 189, 99, 176, 191, 61, 35, 89, 240, 189, 187, 187, 55, 60, 240, 222, 192, 189, 30, 151, 100, 60, 119, 101, 110, 189, 57, 4, 18, 190, 253, 253, 151, 61, 233, 9, 243, 61, 252, 189, 151, 189, 247, 8, 178, 61, 217, 81, 27, 62, 201, 39, 41, 190, 61, 12, 12, 62, 165, 71, 71, 190, 113, 118, 31, 189, 193, 182, 17, 60, 37, 10, 250, 61, 120, 102, 81, 60, 24, 56, 17, 62, 58, 161, 7, 190, 213, 111, 15, 62, 75, 5, 63, 190, 63, 191, 178, 190, 158, 101, 32, 60, 219, 243, 210, 190, 153, 115, 18, 191, 77, 56, 221, 62, 180, 152, 22, 191, 242, 236, 253, 190, 81, 109, 88, 62, 151, 225, 79, 191, 245, 138, 161, 190, 36, 116, 187, 190, 115, 174, 15, 62, 43, 3, 147, 62, 19, 23, 114, 62, 151, 238, 165, 62, 33, 186, 4, 62, 250, 59, 143, 190, 167, 158, 170, 62, 55, 247, 3, 191, 129, 115, 225, 60, 81, 145, 102, 189, 71, 97, 156, 190, 122, 252, 251, 189, 73, 223, 89, 62, 70, 29, 240, 190, 161, 88, 22, 62, 196, 10, 111, 62, 222, 37, 159, 190, 60, 43, 19, 190, 198, 149, 70, 61, 221, 130, 189, 188, 211, 183, 46, 190, 164, 209, 237, 189, 115, 6, 231, 61, 119, 216, 182, 189, 170, 175, 13, 188, 214, 23, 232, 61, 124, 174, 138, 62, 128, 107, 153, 189, 1, 35, 234, 61, 195, 150, 179, 188, 40, 208, 81, 60, 165, 46, 135, 62, 184, 28, 171, 62, 52, 126, 174, 62, 102, 183, 140, 190, 199, 70, 179, 62, 214, 149, 161, 60, 63, 126, 113, 62, 199, 102, 3, 188, 242, 252, 55, 188, 175, 88, 97, 60, 201, 131, 41, 62, 107, 222, 120, 62, 227, 155, 136, 190, 33, 38, 133, 61, 30, 167, 165, 190, 197, 117, 49, 189, 152, 0, 28, 190, 201, 180, 226, 190, 11, 92, 132, 190, 31, 93, 140, 62, 14, 73, 5, 190, 124, 91, 60, 61};
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
                alignas(float) const unsigned char memory[] = {159, 79, 49, 189, 156, 136, 67, 61, 59, 134, 218, 189, 236, 90, 255, 60, 201, 190, 170, 62, 111, 144, 132, 190, 218, 93, 69, 62, 205, 248, 58, 62, 23, 173, 9, 187, 141, 218, 232, 189, 196, 67, 69, 190, 95, 156, 160, 62, 82, 38, 43, 62, 162, 148, 134, 62, 52, 69, 65, 62, 247, 131, 228, 61, 14, 118, 222, 61, 83, 205, 181, 62, 13, 28, 66, 188, 165, 101, 30, 61, 32, 176, 187, 189, 35, 150, 158, 57, 148, 93, 71, 189, 251, 2, 145, 190, 213, 255, 160, 189, 217, 167, 8, 62, 146, 202, 114, 61, 88, 226, 242, 187, 98, 182, 97, 190, 77, 50, 40, 190, 130, 115, 117, 62, 155, 211, 90, 188};
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
                alignas(float) const unsigned char memory[] = {193, 67, 197, 189, 214, 189, 34, 63, 27, 135, 47, 62, 197, 87, 176, 62, 209, 31, 89, 189, 153, 12, 14, 191, 212, 219, 209, 190, 211, 130, 197, 189, 205, 146, 197, 62, 25, 29, 218, 190, 128, 177, 105, 190, 241, 203, 45, 62, 128, 81, 42, 191, 201, 159, 190, 189, 233, 15, 100, 63, 0, 140, 129, 190, 71, 179, 45, 61, 192, 222, 247, 190, 106, 255, 77, 61, 247, 231, 216, 189, 169, 60, 178, 62, 81, 120, 6, 191, 41, 134, 241, 62, 194, 194, 57, 63, 54, 122, 145, 61, 40, 220, 23, 191, 114, 217, 222, 62, 32, 106, 138, 190, 42, 221, 43, 188, 133, 161, 157, 189, 242, 170, 86, 63, 127, 119, 140, 190, 28, 13, 180, 189, 104, 71, 198, 61, 132, 156, 9, 191, 68, 116, 10, 190, 18, 47, 77, 190, 239, 103, 53, 62, 30, 89, 194, 189, 110, 183, 57, 190, 11, 119, 131, 189, 216, 47, 139, 60, 42, 51, 200, 60, 110, 116, 216, 190, 227, 64, 181, 60, 228, 105, 57, 190, 49, 116, 59, 189, 206, 181, 67, 191, 181, 193, 228, 188, 58, 17, 195, 189, 138, 136, 222, 60, 53, 21, 166, 61, 251, 164, 92, 62, 180, 162, 87, 61, 253, 99, 233, 61, 189, 245, 6, 63, 248, 86, 24, 59, 240, 196, 84, 62, 158, 120, 128, 61, 114, 103, 43, 189, 251, 237, 174, 60, 203, 161, 221, 189, 157, 192, 254, 61, 22, 104, 159, 61};
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
                alignas(float) const unsigned char memory[] = {18, 119, 76, 60, 204, 220, 129, 190};
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
    alignas(float) const unsigned char memory[] = {212, 123, 115, 191, 121, 249, 192, 63, 8, 207, 213, 188};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {115, 178, 72, 64, 140, 114, 73, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0027/steps/000000000014000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
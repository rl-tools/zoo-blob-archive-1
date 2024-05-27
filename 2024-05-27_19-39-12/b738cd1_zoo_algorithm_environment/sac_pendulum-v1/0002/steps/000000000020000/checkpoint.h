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
                alignas(float) const unsigned char memory[] = {144, 143, 77, 63, 183, 138, 74, 190, 39, 240, 151, 190, 248, 67, 142, 62, 17, 190, 183, 191, 173, 157, 193, 190, 44, 187, 30, 62, 240, 120, 27, 191, 215, 192, 244, 62, 205, 181, 170, 190, 118, 55, 13, 191, 191, 11, 13, 63, 194, 154, 81, 191, 127, 66, 237, 191, 127, 107, 241, 190, 168, 229, 20, 63, 184, 241, 71, 63, 163, 125, 74, 62, 218, 188, 53, 63, 191, 116, 42, 190, 122, 89, 29, 63, 173, 163, 122, 191, 4, 249, 150, 190, 7, 231, 251, 189, 28, 27, 12, 62, 68, 39, 229, 63, 172, 69, 72, 63, 125, 207, 77, 191, 16, 250, 101, 62, 154, 117, 0, 191, 117, 222, 35, 63, 162, 226, 58, 191, 36, 191, 193, 60, 112, 165, 233, 190, 14, 239, 116, 63, 57, 43, 165, 60, 250, 65, 216, 190, 117, 84, 60, 191, 67, 211, 243, 189, 116, 131, 219, 62, 171, 140, 245, 190, 17, 107, 29, 63, 103, 159, 180, 190, 108, 24, 213, 187, 215, 218, 248, 190, 15, 197, 109, 63, 255, 43, 247, 62, 142, 73, 9, 63, 82, 10, 168, 61, 77, 69, 138, 62, 18, 18, 157, 190, 204, 34, 74, 191, 245, 6, 29, 191, 146, 108, 141, 189, 37, 201, 216, 61, 159, 103, 75, 191, 229, 148, 6, 190, 100, 109, 73, 191, 206, 240, 218, 190, 133, 15, 18, 190, 230, 234, 46, 191, 246, 194, 210, 191, 3, 229, 151, 190, 42, 226, 239, 62, 32, 77, 96, 191, 57, 20, 227, 190, 190, 182, 228, 62, 16, 70, 131, 63, 6, 93, 3, 63, 33, 158, 175, 62, 64, 123, 144, 62, 53, 48, 40, 61, 170, 46, 214, 190, 42, 29, 181, 62, 48, 229, 233, 190, 107, 91, 196, 61, 129, 208, 89, 62, 43, 105, 211, 189, 160, 76, 74, 63, 137, 103, 228, 190, 160, 127, 204, 190, 149, 210, 53, 188, 172, 166, 30, 63, 96, 229, 161, 190, 243, 60, 228, 62, 132, 45, 227, 62, 1, 138, 51, 189, 110, 207, 210, 60, 45, 247, 151, 190, 147, 69, 185, 62, 16, 25, 58, 63, 16, 198, 167, 191, 87, 228, 98, 190, 231, 253, 41, 63, 255, 233, 75, 63, 157, 21, 173, 62};
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
                alignas(float) const unsigned char memory[] = {51, 75, 116, 191, 94, 229, 2, 62, 178, 18, 236, 189, 157, 8, 69, 189, 110, 186, 123, 190, 177, 216, 96, 191, 242, 131, 158, 190, 131, 122, 228, 190, 9, 126, 121, 60, 237, 134, 7, 63, 235, 9, 54, 63, 19, 202, 66, 63, 66, 165, 27, 63, 244, 83, 61, 62, 130, 47, 182, 189, 207, 49, 120, 190, 234, 4, 39, 63, 54, 173, 54, 63, 234, 3, 223, 62, 15, 188, 61, 63, 88, 69, 27, 62, 97, 111, 217, 61, 216, 30, 206, 62, 133, 82, 65, 191, 237, 74, 77, 190, 149, 83, 141, 62, 23, 177, 204, 190, 169, 9, 111, 62, 155, 93, 221, 62, 239, 183, 131, 60, 218, 118, 61, 61, 151, 80, 52, 191};
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
                alignas(float) const unsigned char memory[] = {108, 211, 142, 190, 63, 6, 91, 189, 216, 145, 95, 62, 127, 97, 57, 190, 150, 27, 132, 190, 114, 22, 166, 62, 204, 251, 92, 61, 44, 76, 191, 61, 237, 237, 34, 190, 55, 192, 157, 62, 57, 42, 74, 61, 232, 46, 5, 62, 38, 40, 99, 62, 228, 170, 148, 61, 198, 44, 145, 61, 115, 112, 178, 62, 106, 249, 19, 189, 48, 215, 5, 190, 249, 243, 166, 61, 28, 211, 157, 60, 234, 204, 222, 190, 137, 183, 60, 190, 253, 152, 8, 62, 56, 138, 122, 190, 139, 188, 10, 62, 207, 218, 62, 62, 228, 205, 152, 189, 189, 153, 18, 61, 222, 59, 67, 62, 81, 161, 128, 61, 68, 27, 81, 190, 230, 249, 184, 61, 221, 183, 121, 191, 170, 115, 103, 190, 243, 109, 224, 61, 25, 22, 176, 61, 224, 137, 48, 191, 147, 185, 45, 63, 67, 229, 60, 62, 92, 172, 11, 191, 224, 230, 165, 61, 96, 248, 99, 188, 229, 38, 222, 189, 33, 254, 83, 62, 10, 193, 96, 190, 223, 102, 64, 189, 196, 182, 227, 59, 222, 227, 73, 61, 40, 202, 16, 62, 216, 87, 237, 189, 132, 244, 91, 190, 157, 93, 99, 190, 40, 144, 87, 191, 178, 157, 160, 61, 172, 127, 141, 62, 219, 143, 202, 190, 21, 102, 6, 190, 141, 187, 159, 62, 110, 234, 31, 62, 35, 244, 176, 61, 249, 174, 234, 62, 17, 128, 71, 61, 37, 192, 16, 191, 207, 111, 153, 61, 101, 142, 20, 189, 10, 176, 249, 61, 142, 112, 16, 62, 227, 209, 140, 189, 238, 22, 72, 60, 146, 200, 28, 190, 144, 82, 45, 190, 33, 50, 36, 62, 197, 172, 255, 61, 219, 106, 197, 60, 1, 208, 4, 62, 96, 165, 215, 59, 233, 87, 13, 187, 78, 11, 190, 189, 46, 252, 163, 189, 7, 216, 87, 61, 114, 141, 231, 60, 108, 120, 139, 189, 98, 168, 249, 189, 145, 157, 32, 61, 105, 180, 213, 189, 199, 52, 26, 189, 90, 53, 38, 190, 171, 3, 199, 189, 70, 63, 28, 190, 40, 142, 3, 61, 82, 180, 76, 60, 244, 8, 21, 189, 190, 225, 0, 190, 228, 225, 5, 190, 52, 222, 70, 188, 89, 236, 51, 190, 131, 91, 144, 61, 104, 80, 197, 61, 252, 86, 244, 190, 43, 55, 180, 62, 180, 211, 196, 191, 129, 236, 249, 190, 193, 125, 17, 190, 195, 205, 53, 191, 61, 197, 98, 62, 114, 58, 10, 190, 173, 239, 196, 62, 247, 124, 130, 62, 14, 81, 128, 62, 202, 26, 8, 62, 115, 46, 168, 190, 228, 246, 172, 189, 203, 50, 97, 190, 92, 140, 25, 62, 209, 14, 134, 62, 19, 217, 212, 61, 155, 225, 44, 191, 181, 96, 63, 62, 131, 251, 128, 189, 102, 80, 188, 62, 52, 93, 170, 60, 131, 254, 254, 189, 147, 4, 79, 62, 211, 228, 48, 62, 28, 135, 153, 190, 29, 110, 79, 189, 74, 33, 151, 62, 115, 144, 105, 190, 59, 234, 8, 190, 137, 212, 143, 189, 57, 179, 88, 62, 37, 138, 159, 188, 20, 5, 189, 61, 108, 207, 237, 189, 83, 72, 14, 62, 135, 173, 150, 189, 42, 222, 222, 190, 67, 109, 15, 62, 139, 102, 238, 62, 98, 58, 11, 191, 190, 106, 174, 62, 210, 229, 130, 62, 186, 111, 60, 62, 144, 131, 12, 190, 240, 88, 142, 188, 73, 202, 34, 61, 185, 83, 227, 62, 231, 132, 21, 62, 227, 120, 179, 190, 222, 66, 93, 61, 113, 6, 117, 61, 237, 132, 162, 57, 82, 120, 29, 61, 204, 174, 149, 189, 37, 179, 233, 189, 228, 237, 33, 62, 237, 65, 127, 189, 220, 125, 133, 62, 227, 98, 228, 61, 137, 239, 161, 191, 255, 234, 97, 62, 134, 47, 141, 60, 118, 164, 244, 190, 15, 155, 220, 62, 103, 237, 176, 190, 88, 124, 71, 191, 145, 108, 142, 190, 117, 140, 46, 190, 169, 218, 34, 189, 146, 194, 82, 62, 213, 22, 11, 62, 208, 190, 154, 62, 198, 240, 148, 62, 16, 138, 4, 63, 35, 73, 21, 190, 108, 246, 255, 189, 197, 247, 181, 188, 203, 232, 194, 61, 41, 26, 154, 62, 64, 133, 128, 62, 224, 255, 171, 60, 70, 55, 123, 189, 26, 23, 159, 61, 70, 79, 247, 62, 149, 170, 231, 61, 184, 212, 123, 61, 20, 132, 139, 59, 8, 223, 75, 62, 197, 96, 57, 190, 22, 3, 159, 62, 116, 135, 31, 62, 108, 207, 3, 191, 112, 146, 4, 63, 100, 102, 76, 62, 46, 4, 121, 62, 99, 133, 174, 62, 176, 63, 18, 189, 87, 72, 231, 189, 68, 137, 6, 190, 94, 51, 181, 189, 105, 82, 29, 61, 22, 18, 22, 61, 21, 188, 231, 61, 171, 185, 169, 191, 176, 246, 5, 62, 190, 56, 182, 189, 200, 158, 90, 190, 39, 141, 83, 191, 44, 122, 58, 190, 90, 105, 33, 190, 12, 49, 55, 62, 232, 175, 153, 189, 231, 142, 145, 62, 11, 113, 170, 62, 66, 85, 7, 191, 115, 249, 148, 60, 187, 225, 188, 61, 143, 101, 171, 190, 95, 214, 148, 62, 163, 194, 74, 61, 56, 118, 199, 190, 78, 90, 173, 61, 45, 139, 145, 62, 95, 22, 237, 190, 110, 142, 69, 191, 102, 114, 39, 191, 53, 172, 120, 63, 74, 35, 172, 61, 2, 162, 105, 60, 162, 90, 168, 61, 134, 79, 63, 62, 241, 20, 138, 62, 168, 171, 146, 191, 151, 127, 161, 62, 177, 18, 146, 61, 141, 22, 70, 62, 135, 117, 166, 189, 250, 65, 193, 190, 121, 28, 113, 58, 149, 20, 86, 62, 3, 1, 166, 62, 60, 213, 192, 58, 174, 67, 142, 62, 202, 153, 160, 60, 138, 69, 5, 62, 255, 176, 207, 190, 10, 250, 1, 191, 242, 141, 163, 189, 253, 203, 142, 190, 24, 148, 78, 62, 109, 40, 2, 190, 134, 164, 172, 189, 39, 44, 19, 63, 193, 88, 8, 190, 76, 91, 131, 191, 33, 236, 226, 62, 93, 76, 193, 189, 242, 64, 202, 61, 165, 178, 254, 190, 51, 142, 41, 188, 87, 203, 22, 190, 212, 32, 44, 191, 117, 30, 193, 189, 162, 66, 35, 190, 137, 150, 78, 62, 22, 249, 96, 62, 181, 15, 149, 60, 131, 211, 69, 62, 107, 140, 83, 62, 38, 171, 33, 62, 153, 7, 44, 190, 190, 87, 82, 190, 81, 52, 17, 62, 180, 195, 51, 190, 6, 53, 160, 61, 205, 85, 186, 61, 143, 174, 142, 190, 19, 210, 67, 61, 53, 2, 249, 187, 96, 80, 134, 62, 201, 115, 153, 61, 150, 240, 230, 189, 177, 200, 149, 61, 44, 145, 77, 189, 188, 50, 8, 190, 190, 178, 109, 59, 7, 188, 244, 61, 235, 237, 160, 190, 198, 148, 240, 61, 86, 213, 105, 58, 195, 141, 21, 190, 64, 213, 169, 61, 110, 46, 44, 190, 210, 172, 50, 62, 204, 104, 237, 189, 54, 138, 18, 62, 21, 7, 59, 61, 190, 29, 52, 190, 89, 228, 73, 60, 30, 75, 24, 190, 153, 64, 19, 190, 250, 118, 177, 188, 181, 67, 124, 61, 17, 12, 205, 189, 59, 191, 57, 190, 197, 73, 21, 61, 232, 34, 30, 190, 197, 51, 97, 189, 21, 218, 25, 62, 10, 48, 93, 60, 179, 65, 33, 190, 55, 232, 247, 61, 245, 70, 204, 61, 99, 146, 91, 189, 200, 22, 78, 61, 246, 239, 228, 61, 78, 82, 32, 190, 116, 90, 126, 187, 201, 185, 15, 62, 170, 153, 200, 61, 32, 213, 179, 191, 88, 58, 71, 190, 166, 148, 62, 62, 8, 126, 17, 189, 200, 179, 22, 191, 195, 131, 66, 63, 79, 148, 13, 62, 123, 125, 199, 189, 224, 13, 239, 61, 92, 207, 71, 62, 103, 188, 131, 62, 229, 151, 23, 189, 184, 89, 252, 60, 181, 177, 223, 189, 247, 171, 55, 62, 175, 164, 142, 62, 254, 111, 81, 62, 31, 67, 193, 190, 133, 6, 80, 61, 23, 71, 190, 190, 152, 61, 252, 191, 201, 245, 216, 188, 90, 170, 34, 62, 176, 189, 237, 190, 140, 63, 197, 188, 157, 33, 59, 62, 44, 35, 184, 189, 28, 72, 102, 62, 100, 13, 204, 62, 82, 249, 36, 190, 55, 240, 19, 190, 57, 231, 242, 61, 17, 40, 131, 190, 210, 255, 131, 191, 223, 114, 42, 63, 124, 241, 21, 190, 135, 82, 3, 62, 62, 39, 220, 61, 71, 208, 234, 60, 90, 111, 71, 62, 172, 255, 217, 190, 245, 130, 161, 189, 232, 58, 61, 191, 13, 125, 196, 60, 114, 59, 45, 62, 240, 222, 75, 191, 116, 217, 203, 190, 15, 223, 149, 59, 206, 150, 87, 190, 54, 84, 135, 62, 71, 2, 10, 190, 126, 63, 46, 62, 216, 14, 1, 188, 92, 85, 6, 191, 100, 49, 115, 191, 157, 21, 33, 190, 40, 111, 34, 191, 41, 91, 49, 190, 128, 232, 161, 190, 92, 219, 84, 191, 206, 88, 239, 189, 125, 212, 165, 190, 245, 23, 191, 190, 191, 132, 117, 61, 1, 60, 28, 62, 46, 140, 112, 189, 165, 22, 22, 62, 81, 92, 55, 190, 63, 161, 195, 189, 163, 175, 163, 61, 27, 37, 208, 60, 85, 117, 10, 190, 30, 140, 52, 61, 164, 4, 22, 62, 4, 123, 25, 190, 217, 31, 115, 190, 143, 153, 31, 191, 201, 66, 193, 189, 18, 60, 233, 59, 72, 74, 24, 61, 102, 201, 119, 190, 173, 21, 254, 190, 238, 168, 60, 190, 107, 27, 88, 191, 84, 225, 7, 62, 126, 188, 27, 190, 7, 177, 72, 61, 39, 178, 14, 63, 47, 142, 163, 189, 227, 79, 153, 189, 77, 229, 21, 190, 185, 100, 248, 189, 184, 52, 157, 189, 14, 11, 3, 190, 14, 226, 40, 190, 124, 176, 209, 61, 104, 232, 47, 191, 120, 80, 50, 190, 68, 56, 200, 62, 49, 133, 187, 62, 215, 161, 74, 61, 15, 42, 171, 189, 231, 250, 151, 59, 37, 71, 102, 62, 26, 70, 113, 191, 232, 152, 66, 62, 78, 57, 255, 190, 81, 214, 128, 61, 85, 248, 135, 62, 72, 214, 40, 191, 141, 224, 46, 62, 142, 214, 194, 190, 161, 48, 14, 61, 234, 103, 87, 62, 11, 233, 67, 60, 123, 99, 71, 62, 129, 144, 127, 61, 60, 109, 209, 190, 152, 148, 157, 191, 8, 140, 50, 62, 188, 25, 143, 190, 112, 212, 9, 62, 93, 160, 169, 189, 16, 152, 24, 190, 140, 71, 84, 189, 214, 172, 180, 62, 216, 108, 194, 190, 28, 25, 117, 62, 167, 74, 51, 191, 170, 62, 90, 61, 162, 9, 37, 63, 251, 1, 10, 62, 196, 158, 138, 62, 148, 191, 32, 190, 103, 213, 210, 61, 120, 141, 118, 62, 196, 36, 197, 190, 83, 194, 1, 62, 220, 31, 127, 189, 65, 233, 202, 189, 3, 221, 13, 62, 98, 201, 187, 190, 100, 107, 111, 60, 235, 48, 199, 190, 221, 35, 150, 62, 239, 206, 226, 62, 198, 209, 246, 61, 127, 7, 47, 62, 9, 108, 58, 62, 97, 162, 57, 190, 130, 126, 30, 191, 99, 121, 242, 189, 172, 45, 208, 190, 14, 132, 10, 62, 22, 180, 155, 189, 17, 255, 110, 190, 225, 164, 218, 188, 158, 246, 13, 190, 33, 181, 218, 61, 203, 81, 192, 60, 1, 81, 250, 60, 29, 144, 35, 190, 51, 170, 101, 189, 1, 73, 95, 61, 239, 103, 126, 188, 208, 208, 37, 62, 85, 216, 136, 61, 135, 230, 227, 57, 80, 159, 190, 189, 116, 150, 32, 190, 51, 151, 18, 62, 16, 48, 217, 61, 221, 22, 182, 189, 166, 40, 201, 60, 162, 209, 247, 61, 208, 153, 231, 188, 241, 160, 196, 61, 212, 255, 204, 61, 83, 187, 174, 189, 207, 53, 180, 60, 12, 197, 36, 190, 51, 212, 14, 189, 78, 3, 239, 60, 241, 243, 153, 61, 49, 12, 19, 189, 174, 152, 172, 61, 20, 101, 7, 189, 96, 192, 88, 189, 51, 57, 25, 190, 184, 26, 51, 190, 106, 167, 143, 189, 223, 62, 139, 189, 83, 175, 28, 190, 145, 142, 133, 61, 193, 143, 204, 60, 209, 233, 146, 60, 12, 124, 44, 190, 225, 224, 208, 189, 220, 124, 18, 190, 162, 65, 28, 190, 120, 250, 219, 60, 150, 82, 48, 190, 179, 102, 39, 190, 114, 10, 218, 189, 11, 136, 225, 188, 3, 176, 190, 61, 180, 230, 110, 61, 159, 53, 2, 190, 163, 216, 186, 61, 163, 167, 51, 58, 80, 105, 24, 190, 3, 116, 26, 190, 159, 52, 154, 189, 213, 240, 1, 190, 131, 18, 194, 189, 51, 22, 195, 61, 202, 54, 200, 61, 111, 83, 209, 61, 98, 22, 151, 189, 83, 122, 207, 59, 78, 102, 16, 187, 205, 153, 186, 61, 209, 199, 220, 61, 69, 218, 237, 189, 223, 112, 95, 188, 253, 19, 241, 188, 74, 100, 232, 61, 6, 172, 88, 61, 178, 122, 221, 61, 168, 157, 8, 61, 140, 110, 68, 190, 74, 216, 62, 190, 139, 99, 2, 190, 94, 128, 142, 60, 20, 78, 148, 61, 57, 61, 86, 190, 196, 27, 68, 189, 173, 215, 199, 60, 127, 76, 122, 61, 220, 234, 227, 189, 165, 129, 93, 189, 128, 90, 143, 188, 192, 167, 31, 190, 222, 165, 49, 190, 75, 107, 11, 190, 83, 157, 11, 188, 167, 147, 216, 61, 206, 240, 14, 190, 124, 55, 103, 61, 157, 204, 182, 189, 249, 82, 22, 190, 95, 69, 203, 60, 193, 80, 122, 61, 225, 185, 147, 61, 39, 168, 167, 61, 24, 42, 133, 189, 133, 84, 137, 62, 81, 37, 45, 62, 28, 146, 115, 62, 153, 124, 131, 189, 70, 118, 133, 189, 243, 230, 58, 191, 191, 88, 12, 189, 141, 1, 185, 187, 166, 171, 40, 188, 67, 157, 47, 62, 250, 171, 103, 62, 208, 64, 20, 190, 179, 161, 80, 61, 123, 99, 150, 62, 123, 85, 47, 62, 218, 208, 16, 190, 205, 54, 36, 62, 213, 100, 17, 189, 146, 215, 251, 61, 146, 23, 205, 189, 88, 161, 84, 189, 140, 66, 85, 59, 211, 93, 32, 60, 20, 101, 232, 61, 219, 61, 254, 61, 7, 90, 7, 62, 9, 6, 252, 61, 155, 160, 194, 189, 112, 33, 41, 62, 101, 254, 103, 62, 62, 146, 34, 62, 238, 135, 135, 61, 75, 87, 86, 191, 34, 176, 250, 189, 176, 221, 150, 61, 163, 222, 51, 191, 234, 227, 17, 62, 152, 103, 26, 62, 146, 175, 118, 62, 217, 146, 109, 60, 197, 157, 11, 191, 145, 60, 5, 189, 220, 146, 88, 62, 81, 176, 36, 189, 113, 172, 224, 189, 192, 233, 169, 61, 7, 187, 98, 60, 134, 158, 217, 62, 216, 157, 172, 61, 175, 29, 215, 61, 50, 255, 89, 62, 58, 235, 34, 62, 135, 64, 30, 62, 222, 138, 179, 188, 209, 249, 170, 189, 214, 15, 229, 61, 214, 176, 80, 188, 9, 135, 131, 61, 13, 176, 229, 189, 186, 150, 7, 189, 237, 236, 54, 62, 224, 192, 174, 190, 65, 172, 76, 190, 4, 205, 21, 191, 17, 104, 18, 63, 11, 219, 75, 62, 223, 106, 30, 63, 23, 183, 9, 190, 152, 61, 205, 61, 160, 121, 235, 61, 152, 174, 39, 190, 94, 41, 148, 189, 241, 67, 140, 190, 15, 82, 22, 62, 137, 202, 62, 190, 172, 127, 92, 189, 138, 158, 104, 189, 239, 198, 136, 190, 124, 168, 88, 62, 153, 159, 250, 189, 245, 222, 41, 62, 146, 57, 4, 190, 138, 236, 135, 61, 47, 235, 154, 59, 173, 14, 36, 62, 181, 250, 16, 190, 136, 127, 16, 62, 18, 85, 203, 189, 69, 132, 110, 61, 36, 178, 31, 187, 95, 106, 164, 58, 142, 23, 186, 189, 154, 0, 17, 62, 113, 37, 31, 190, 60, 151, 141, 189, 37, 12, 109, 190, 179, 219, 24, 190, 160, 65, 220, 189, 165, 100, 197, 187, 212, 188, 180, 189, 207, 146, 152, 189, 78, 77, 44, 190, 108, 47, 80, 61, 152, 68, 176, 188, 205, 226, 66, 61, 227, 81, 153, 189, 87, 158, 191, 61, 184, 224, 88, 61, 1, 89, 36, 61, 209, 18, 36, 189, 79, 48, 119, 189, 77, 67, 29, 190, 149, 222, 26, 190, 0, 61, 32, 190, 213, 206, 162, 189, 101, 188, 208, 189, 45, 146, 232, 188, 121, 54, 100, 189, 195, 49, 39, 190, 154, 254, 154, 61, 135, 216, 236, 189, 13, 73, 17, 62, 71, 90, 227, 61, 200, 90, 39, 190, 162, 66, 77, 61, 99, 162, 22, 190, 101, 90, 244, 187, 195, 172, 41, 189, 132, 116, 10, 191, 29, 119, 135, 190, 62, 177, 200, 62, 204, 138, 68, 190, 146, 191, 160, 62, 229, 83, 178, 62, 22, 53, 154, 62, 99, 16, 223, 62, 40, 54, 146, 190, 127, 132, 102, 62, 0, 138, 196, 189, 52, 152, 161, 189, 82, 113, 246, 188, 240, 4, 249, 189, 162, 55, 93, 62, 230, 168, 11, 62, 207, 79, 157, 62, 106, 167, 224, 61, 6, 91, 102, 62, 4, 64, 255, 189, 236, 112, 233, 62, 201, 32, 158, 190, 3, 18, 141, 189, 254, 179, 31, 191, 178, 193, 225, 190, 43, 228, 154, 187, 115, 57, 35, 189, 167, 73, 79, 190, 110, 222, 6, 62, 214, 186, 165, 190, 122, 219, 79, 190, 246, 185, 151, 60, 149, 17, 72, 191, 138, 103, 121, 191, 243, 168, 218, 61, 158, 207, 247, 189, 132, 149, 42, 190, 68, 25, 74, 191, 96, 207, 175, 62, 175, 168, 3, 62, 163, 70, 182, 62, 127, 124, 131, 62, 119, 223, 30, 191, 112, 187, 129, 62, 37, 137, 175, 191, 191, 84, 185, 189, 204, 215, 149, 188, 30, 136, 107, 62, 243, 76, 122, 62, 17, 253, 65, 191, 96, 68, 178, 191, 155, 86, 24, 191, 91, 173, 201, 188, 21, 20, 188, 191, 142, 125, 7, 62, 134, 220, 43, 63, 95, 47, 220, 61, 151, 1, 112, 62, 113, 213, 185, 191, 98, 119, 0, 63, 80, 69, 240, 62, 236, 182, 137, 189, 225, 66, 5, 192, 79, 105, 238, 62, 181, 110, 61, 189, 111, 103, 14, 190, 147, 128, 75, 188, 84, 24, 186, 189, 132, 78, 41, 62, 2, 203, 40, 190, 49, 143, 136, 189, 66, 234, 100, 61, 63, 179, 190, 61, 7, 99, 220, 189, 75, 87, 18, 62, 13, 34, 30, 188, 238, 214, 252, 189, 84, 132, 153, 188, 81, 164, 101, 61, 108, 91, 145, 189, 98, 162, 28, 190, 247, 246, 3, 190, 219, 182, 209, 189, 95, 185, 2, 61, 6, 38, 129, 61, 192, 110, 38, 188, 15, 22, 240, 189, 254, 3, 216, 59, 163, 206, 250, 61, 71, 76, 104, 59, 184, 135, 35, 190, 46, 160, 201, 61, 184, 59, 143, 61, 188, 195, 24, 190, 251, 200, 45, 189, 112, 197, 240, 61, 118, 30, 47, 191, 182, 29, 158, 190, 144, 20, 105, 62, 230, 99, 46, 190, 39, 215, 81, 62, 147, 23, 108, 62, 159, 219, 167, 61, 20, 55, 129, 61, 19, 191, 8, 190, 65, 170, 83, 188, 93, 59, 185, 61, 254, 9, 166, 189, 228, 88, 192, 189, 12, 163, 191, 190, 81, 68, 145, 61, 187, 248, 69, 62, 60, 76, 195, 62, 85, 191, 197, 189, 214, 125, 35, 62, 168, 231, 176, 190, 184, 225, 125, 62, 89, 247, 137, 189, 67, 125, 195, 189, 152, 24, 5, 62, 227, 113, 198, 190, 208, 253, 153, 62, 66, 11, 39, 190, 35, 250, 103, 187, 47, 122, 180, 62, 91, 3, 91, 190, 59, 112, 145, 190, 103, 8, 242, 189, 67, 164, 5, 62, 52, 54, 238, 60, 74, 242, 236, 62, 176, 118, 99, 190, 19, 21, 24, 62, 74, 173, 125, 63, 0, 5, 251, 62, 1, 73, 170, 61, 64, 240, 161, 189, 138, 65, 120, 189, 135, 173, 39, 62, 238, 209, 220, 190, 239, 39, 167, 190, 103, 79, 187, 60, 149, 54, 33, 62, 33, 202, 86, 62, 202, 21, 14, 62, 58, 69, 246, 190, 189, 122, 166, 61, 21, 7, 57, 191, 17, 14, 134, 191, 251, 221, 11, 62, 137, 84, 96, 61, 18, 144, 2, 191, 252, 78, 180, 190, 47, 137, 2, 190, 155, 222, 36, 62, 155, 235, 88, 191, 93, 175, 165, 60, 247, 155, 159, 190, 169, 252, 151, 190, 187, 161, 163, 62, 249, 60, 16, 191, 177, 13, 182, 190, 182, 22, 227, 62, 121, 35, 137, 62, 154, 169, 214, 61, 167, 142, 93, 62, 235, 224, 39, 188, 167, 61, 51, 62, 94, 83, 76, 191, 59, 141, 141, 62, 160, 198, 61, 190, 171, 0, 77, 60, 7, 75, 108, 62, 39, 109, 19, 191, 46, 70, 130, 62, 85, 82, 239, 61, 30, 124, 199, 58, 42, 147, 60, 62, 204, 162, 63, 61, 206, 134, 187, 62, 183, 218, 146, 62, 49, 181, 128, 190, 216, 31, 157, 191, 201, 89, 41, 61, 122, 179, 128, 190, 124, 67, 38, 62, 185, 239, 186, 189, 123, 130, 103, 189, 161, 254, 150, 61, 28, 130, 130, 189, 59, 138, 175, 190, 28, 159, 69, 62, 172, 115, 92, 61, 175, 137, 41, 190, 171, 79, 133, 61, 196, 68, 67, 190, 93, 162, 9, 62, 5, 55, 37, 62, 247, 191, 193, 61, 245, 63, 255, 188, 244, 150, 120, 189, 210, 200, 52, 189, 110, 237, 232, 188, 204, 20, 245, 61, 150, 53, 85, 190, 155, 87, 171, 187, 21, 242, 70, 189, 195, 179, 164, 61, 37, 27, 151, 190, 181, 148, 6, 60, 175, 184, 79, 190, 86, 88, 199, 190, 80, 61, 189, 187, 48, 127, 154, 61, 140, 29, 93, 189, 129, 49, 249, 189, 178, 211, 32, 62, 71, 157, 215, 58, 183, 122, 133, 60, 3, 127, 35, 190, 99, 24, 110, 189, 23, 165, 195, 189, 177, 193, 21, 190, 140, 246, 164, 188, 113, 212, 173, 62, 243, 108, 254, 61, 108, 255, 80, 190, 104, 151, 197, 190, 212, 208, 155, 62, 76, 92, 230, 190, 209, 8, 194, 61, 161, 39, 151, 189, 98, 164, 245, 189, 153, 75, 150, 62, 55, 101, 162, 190, 20, 51, 232, 187, 41, 246, 14, 190, 151, 45, 173, 190, 105, 167, 117, 62, 223, 43, 158, 60, 112, 26, 173, 61, 39, 26, 34, 62, 72, 40, 47, 188, 82, 153, 97, 60, 229, 152, 71, 62, 131, 220, 139, 190, 222, 183, 78, 62, 125, 251, 202, 62, 188, 17, 203, 187, 104, 181, 194, 61, 42, 8, 155, 190, 246, 244, 6, 189, 54, 140, 179, 61, 57, 207, 192, 190, 40, 132, 100, 190, 120, 84, 226, 62, 228, 71, 145, 191, 111, 190, 210, 190, 105, 100, 166, 62, 102, 145, 200, 186, 105, 78, 1, 191, 13, 233, 119, 63, 20, 104, 8, 62, 38, 248, 4, 190, 72, 207, 238, 61, 251, 4, 39, 62, 23, 70, 190, 62, 98, 112, 110, 189, 46, 174, 51, 191, 218, 120, 1, 62, 43, 204, 33, 62, 222, 6, 82, 62, 222, 251, 162, 62, 94, 23, 111, 191, 221, 77, 193, 61, 134, 88, 100, 191, 18, 201, 246, 191, 156, 235, 136, 60, 31, 8, 140, 62, 220, 133, 56, 191, 57, 4, 227, 61, 254, 155, 216, 62, 42, 168, 87, 62, 105, 208, 162, 61, 84, 126, 1, 63, 217, 227, 33, 190, 70, 226, 79, 191, 24, 202, 156, 61, 136, 206, 51, 61, 225, 218, 127, 61, 119, 95, 53, 191, 60, 171, 20, 63, 155, 97, 251, 191, 73, 173, 13, 191, 41, 135, 132, 190, 29, 243, 14, 191, 68, 205, 206, 61, 21, 218, 245, 189, 74, 102, 170, 62, 248, 67, 57, 190, 158, 162, 4, 63, 32, 186, 140, 62, 88, 179, 12, 191, 126, 210, 207, 190, 78, 23, 126, 61, 222, 129, 66, 62, 114, 199, 112, 62, 153, 105, 130, 61, 164, 163, 143, 191, 252, 34, 43, 62, 35, 71, 95, 188, 252, 158, 220, 189, 173, 213, 198, 61, 101, 169, 204, 61, 121, 91, 144, 62, 209, 163, 117, 62, 158, 206, 242, 190, 117, 236, 31, 62, 225, 192, 253, 62, 249, 121, 132, 191};
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
                alignas(float) const unsigned char memory[] = {110, 66, 238, 61, 199, 250, 215, 61, 21, 88, 208, 189, 66, 136, 177, 188, 243, 60, 35, 61, 14, 92, 204, 62, 80, 198, 4, 61, 6, 199, 139, 62, 244, 26, 239, 61, 196, 103, 21, 189, 40, 209, 73, 62, 2, 250, 1, 190, 155, 170, 134, 190, 70, 159, 228, 61, 208, 220, 87, 61, 120, 144, 78, 190, 162, 30, 163, 60, 122, 193, 247, 188, 195, 185, 82, 61, 101, 52, 130, 62, 131, 232, 9, 190, 79, 42, 250, 59, 148, 0, 69, 189, 126, 107, 51, 189, 186, 25, 26, 190, 167, 58, 179, 61, 32, 246, 14, 190, 73, 89, 8, 62, 197, 13, 157, 189, 164, 167, 67, 190, 159, 58, 167, 189, 215, 49, 250, 61};
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
                alignas(float) const unsigned char memory[] = {70, 160, 255, 60, 90, 42, 47, 190, 224, 133, 7, 189, 64, 252, 168, 62, 79, 93, 134, 62, 210, 156, 92, 62, 83, 122, 32, 191, 55, 151, 158, 191, 171, 66, 19, 61, 40, 217, 83, 188, 21, 26, 195, 189, 146, 81, 125, 191, 239, 197, 164, 62, 198, 16, 101, 191, 220, 62, 30, 191, 245, 203, 211, 186, 32, 117, 221, 188, 111, 168, 235, 188, 81, 94, 221, 61, 94, 66, 248, 190, 44, 160, 75, 62, 134, 51, 40, 62, 193, 16, 8, 191, 184, 100, 182, 63, 243, 113, 125, 188, 192, 132, 230, 61, 111, 193, 239, 190, 100, 248, 28, 191, 114, 74, 61, 62, 16, 179, 175, 62, 165, 191, 110, 191, 5, 209, 87, 63, 81, 3, 152, 190, 34, 225, 221, 187, 178, 227, 83, 61, 113, 138, 7, 189, 120, 139, 25, 191, 51, 67, 170, 189, 220, 92, 10, 62, 157, 106, 222, 189, 246, 236, 250, 188, 218, 176, 128, 60, 157, 137, 200, 190, 129, 5, 194, 61, 185, 125, 8, 188, 96, 247, 157, 60, 205, 248, 69, 62, 61, 246, 214, 61, 189, 31, 39, 62, 105, 27, 0, 62, 67, 86, 89, 189, 211, 127, 158, 189, 197, 163, 12, 61, 76, 247, 50, 61, 202, 230, 191, 62, 97, 11, 184, 60, 117, 145, 4, 190, 69, 61, 83, 62, 184, 1, 189, 190, 233, 106, 30, 190, 25, 40, 255, 61, 132, 57, 48, 190, 218, 95, 123, 188, 65, 145, 89, 190};
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
                alignas(float) const unsigned char memory[] = {215, 49, 100, 62, 96, 149, 10, 190};
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
    alignas(float) const unsigned char memory[] = {74, 147, 222, 62, 35, 72, 175, 190, 62, 30, 21, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {109, 246, 152, 63, 251, 49, 154, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0002/steps/000000000020000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
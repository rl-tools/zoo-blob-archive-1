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
                alignas(float) const unsigned char memory[] = {234, 91, 131, 62, 169, 235, 175, 60, 189, 180, 28, 189, 244, 46, 176, 190, 242, 96, 220, 190, 51, 162, 104, 62, 239, 162, 161, 62, 129, 148, 73, 62, 231, 144, 7, 190, 173, 2, 238, 60, 183, 146, 35, 63, 12, 205, 30, 191, 183, 151, 46, 63, 239, 153, 128, 189, 243, 29, 89, 190, 251, 238, 20, 191, 61, 11, 87, 191, 59, 230, 189, 62, 225, 239, 228, 190, 229, 226, 134, 63, 128, 181, 174, 190, 234, 159, 114, 189, 114, 215, 178, 62, 223, 232, 237, 62, 237, 36, 23, 190, 65, 217, 172, 63, 196, 156, 115, 62, 240, 142, 117, 62, 81, 18, 120, 63, 188, 101, 45, 62, 117, 68, 109, 190, 41, 26, 87, 63, 189, 229, 240, 190, 154, 67, 113, 61, 91, 150, 181, 191, 112, 26, 235, 190, 134, 98, 173, 190, 248, 33, 82, 191, 0, 151, 177, 59, 54, 92, 10, 190, 144, 83, 187, 63, 82, 229, 174, 62, 53, 103, 14, 63, 186, 4, 167, 191, 191, 137, 131, 190, 194, 165, 26, 190, 45, 246, 171, 191, 249, 154, 133, 190, 251, 104, 187, 62, 224, 170, 54, 63, 244, 126, 36, 62, 196, 179, 39, 63, 6, 186, 188, 190, 197, 149, 73, 189, 174, 1, 182, 62, 180, 252, 131, 191, 54, 244, 220, 61, 9, 88, 1, 190, 131, 161, 166, 62, 231, 215, 161, 190, 193, 240, 148, 60, 139, 15, 12, 190, 8, 38, 85, 191, 19, 120, 200, 190, 170, 39, 108, 63, 215, 185, 32, 63, 243, 101, 38, 191, 154, 161, 235, 62, 204, 117, 194, 189, 248, 178, 47, 191, 17, 92, 190, 190, 26, 250, 45, 190, 132, 122, 26, 190, 118, 152, 185, 62, 214, 59, 16, 191, 1, 56, 60, 62, 66, 220, 123, 62, 77, 96, 25, 191, 62, 30, 27, 191, 217, 111, 115, 63, 64, 153, 214, 189, 98, 173, 157, 190, 51, 203, 115, 191, 130, 48, 13, 191, 146, 125, 134, 62, 30, 46, 132, 63, 121, 162, 171, 62, 140, 86, 66, 63, 39, 226, 135, 189, 85, 248, 93, 62, 84, 191, 35, 191, 191, 223, 148, 191, 75, 152, 130, 190, 167, 181, 18, 191, 140, 58, 22, 190, 92, 250, 7, 191};
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
                alignas(float) const unsigned char memory[] = {80, 13, 35, 191, 223, 194, 192, 190, 217, 79, 228, 62, 15, 110, 252, 61, 80, 140, 62, 191, 120, 237, 97, 190, 190, 96, 243, 188, 232, 194, 148, 190, 77, 66, 140, 190, 28, 166, 95, 190, 214, 254, 61, 190, 251, 232, 53, 190, 200, 77, 10, 63, 198, 17, 209, 190, 66, 223, 26, 61, 187, 176, 250, 188, 64, 14, 130, 190, 155, 89, 0, 190, 15, 255, 18, 191, 0, 153, 20, 63, 255, 103, 189, 190, 105, 140, 142, 190, 250, 252, 50, 63, 83, 146, 42, 63, 4, 230, 38, 190, 188, 100, 62, 59, 242, 238, 100, 62, 161, 186, 14, 190, 85, 101, 194, 190, 206, 69, 28, 191, 162, 72, 238, 62, 72, 10, 28, 191};
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
                alignas(float) const unsigned char memory[] = {165, 66, 233, 189, 4, 179, 190, 189, 253, 162, 98, 190, 56, 104, 148, 61, 188, 121, 102, 62, 82, 206, 178, 189, 170, 179, 8, 62, 159, 2, 153, 187, 252, 236, 13, 60, 29, 168, 33, 62, 109, 1, 101, 190, 101, 115, 218, 189, 92, 246, 21, 189, 245, 109, 2, 190, 181, 129, 67, 60, 235, 205, 159, 60, 20, 89, 251, 61, 25, 205, 192, 189, 247, 14, 203, 61, 21, 19, 48, 61, 124, 212, 255, 61, 175, 88, 115, 61, 164, 10, 252, 190, 133, 248, 227, 189, 179, 135, 129, 188, 132, 134, 62, 189, 97, 154, 232, 190, 244, 100, 210, 188, 4, 33, 207, 189, 3, 59, 147, 61, 28, 210, 159, 61, 164, 137, 217, 187, 237, 99, 6, 62, 99, 146, 245, 189, 192, 55, 218, 62, 231, 83, 139, 62, 113, 241, 214, 62, 172, 78, 0, 186, 162, 197, 217, 188, 214, 227, 227, 59, 170, 158, 214, 61, 147, 75, 144, 191, 31, 158, 2, 187, 75, 254, 98, 189, 239, 107, 242, 61, 158, 197, 35, 62, 202, 173, 195, 62, 245, 124, 236, 189, 195, 169, 8, 191, 245, 101, 244, 61, 60, 37, 158, 62, 245, 68, 67, 187, 255, 33, 237, 189, 218, 133, 163, 189, 55, 135, 193, 189, 194, 178, 13, 62, 22, 34, 27, 61, 40, 111, 60, 61, 65, 221, 249, 61, 43, 156, 245, 61, 246, 168, 16, 191, 190, 191, 3, 190, 41, 121, 171, 188, 79, 205, 144, 189, 206, 4, 208, 60, 68, 120, 185, 190, 166, 23, 202, 62, 253, 53, 0, 62, 172, 153, 4, 191, 218, 118, 222, 190, 20, 236, 177, 62, 155, 242, 106, 189, 219, 47, 115, 61, 192, 61, 147, 190, 82, 27, 92, 61, 44, 237, 73, 191, 99, 157, 178, 58, 87, 133, 14, 188, 34, 102, 88, 188, 44, 49, 158, 191, 63, 234, 53, 190, 54, 187, 109, 62, 203, 185, 81, 61, 7, 51, 31, 188, 1, 218, 165, 190, 188, 145, 136, 62, 1, 203, 142, 61, 93, 37, 144, 190, 229, 145, 175, 62, 82, 33, 17, 62, 69, 91, 185, 62, 119, 161, 119, 189, 183, 178, 214, 189, 38, 164, 28, 62, 149, 164, 81, 191, 12, 133, 196, 190, 93, 170, 233, 189, 131, 38, 1, 60, 0, 31, 238, 61, 56, 247, 23, 190, 9, 240, 173, 61, 34, 23, 141, 61, 155, 150, 171, 189, 218, 233, 163, 189, 245, 2, 10, 62, 135, 79, 244, 189, 132, 219, 144, 190, 146, 166, 107, 190, 79, 108, 162, 62, 200, 217, 141, 61, 254, 148, 180, 189, 21, 215, 132, 191, 235, 123, 181, 189, 130, 84, 200, 189, 39, 70, 188, 61, 201, 173, 213, 190, 103, 69, 173, 190, 133, 54, 80, 57, 89, 72, 198, 190, 198, 249, 19, 191, 143, 116, 222, 188, 234, 118, 232, 190, 178, 203, 72, 190, 95, 82, 193, 190, 168, 237, 35, 61, 18, 33, 185, 62, 39, 136, 30, 191, 141, 76, 227, 190, 121, 47, 134, 189, 97, 152, 156, 61, 6, 161, 8, 61, 147, 200, 137, 62, 135, 45, 163, 62, 229, 118, 151, 62, 54, 237, 19, 62, 143, 117, 154, 190, 83, 216, 154, 62, 114, 150, 152, 189, 73, 215, 67, 190, 29, 32, 107, 62, 92, 62, 227, 61, 160, 63, 77, 62, 224, 73, 79, 62, 175, 165, 248, 189, 73, 251, 201, 62, 58, 70, 179, 62, 153, 55, 208, 189, 230, 212, 97, 62, 0, 176, 3, 190, 49, 128, 29, 62, 14, 20, 70, 189, 43, 20, 26, 190, 97, 100, 161, 61, 225, 186, 142, 62, 111, 189, 36, 189, 11, 40, 2, 190, 116, 215, 66, 190, 209, 177, 131, 190, 225, 163, 171, 190, 67, 2, 157, 190, 224, 3, 13, 62, 99, 7, 163, 189, 78, 6, 143, 190, 41, 74, 26, 189, 163, 237, 134, 60, 43, 45, 172, 61, 190, 123, 41, 190, 53, 240, 156, 190, 28, 16, 72, 190, 42, 123, 173, 189, 190, 113, 148, 60, 13, 57, 143, 61, 213, 229, 177, 61, 196, 236, 235, 189, 2, 2, 43, 62, 60, 99, 185, 62, 184, 177, 169, 61, 57, 42, 23, 63, 177, 163, 251, 62, 140, 122, 227, 188, 176, 206, 195, 189, 1, 50, 3, 61, 211, 243, 73, 191, 117, 82, 71, 190, 250, 133, 199, 61, 171, 205, 51, 62, 234, 102, 226, 190, 135, 25, 121, 190, 67, 63, 108, 190, 179, 255, 239, 191, 74, 189, 57, 61, 18, 0, 183, 189, 49, 12, 43, 62, 119, 149, 110, 190, 70, 135, 245, 61, 63, 133, 148, 61, 2, 73, 88, 63, 248, 158, 227, 189, 109, 254, 144, 62, 79, 40, 114, 190, 111, 133, 183, 62, 112, 163, 190, 189, 127, 171, 217, 61, 52, 159, 213, 62, 66, 249, 182, 60, 178, 174, 198, 62, 198, 114, 71, 62, 253, 159, 14, 61, 30, 218, 68, 62, 89, 78, 187, 62, 81, 135, 11, 61, 161, 61, 193, 60, 99, 167, 9, 188, 157, 193, 12, 190, 82, 72, 139, 189, 14, 241, 158, 190, 100, 82, 94, 62, 167, 24, 85, 62, 232, 229, 43, 62, 197, 61, 188, 190, 145, 117, 4, 61, 119, 201, 233, 190, 115, 186, 195, 190, 114, 126, 64, 190, 197, 52, 151, 189, 52, 79, 122, 61, 114, 48, 182, 62, 241, 50, 224, 60, 157, 139, 136, 62, 17, 201, 153, 62, 43, 199, 121, 57, 230, 19, 246, 59, 63, 32, 153, 61, 251, 52, 155, 190, 162, 40, 199, 190, 236, 179, 7, 62, 231, 80, 132, 62, 236, 207, 158, 57, 151, 150, 239, 188, 232, 5, 99, 190, 196, 0, 115, 190, 237, 49, 101, 190, 178, 54, 194, 60, 9, 140, 210, 190, 25, 158, 1, 191, 149, 92, 195, 61, 216, 106, 37, 190, 241, 221, 188, 189, 140, 74, 172, 190, 30, 167, 96, 62, 191, 226, 4, 190, 255, 160, 151, 61, 175, 189, 131, 189, 12, 115, 212, 61, 235, 212, 166, 189, 37, 222, 129, 191, 9, 125, 96, 189, 152, 171, 177, 60, 191, 159, 198, 62, 231, 130, 190, 187, 180, 116, 129, 62, 72, 53, 149, 62, 179, 103, 146, 190, 13, 70, 22, 62, 157, 43, 155, 190, 21, 221, 135, 191, 151, 26, 140, 190, 109, 243, 200, 61, 126, 101, 176, 61, 61, 190, 161, 189, 7, 222, 228, 62, 137, 77, 135, 61, 82, 20, 61, 191, 83, 52, 212, 62, 221, 166, 74, 62, 68, 198, 31, 62, 57, 152, 154, 60, 244, 228, 133, 190, 180, 14, 237, 61, 87, 178, 61, 62, 150, 96, 104, 190, 163, 119, 74, 62, 50, 110, 236, 190, 222, 112, 211, 61, 93, 90, 190, 190, 187, 69, 126, 62, 133, 222, 230, 61, 178, 157, 142, 189, 37, 115, 61, 61, 156, 246, 146, 188, 116, 79, 28, 62, 7, 98, 203, 61, 180, 67, 205, 190, 217, 96, 139, 62, 97, 107, 203, 61, 98, 122, 251, 189, 138, 30, 112, 62, 178, 17, 55, 190, 118, 184, 131, 190, 164, 76, 75, 62, 186, 60, 178, 188, 68, 35, 207, 62, 49, 175, 84, 62, 124, 119, 197, 60, 147, 2, 110, 62, 171, 254, 149, 62, 243, 137, 125, 62, 57, 210, 250, 188, 56, 76, 72, 190, 163, 186, 146, 61, 74, 11, 45, 62, 191, 70, 140, 189, 99, 63, 196, 61, 232, 114, 142, 61, 195, 162, 117, 190, 4, 253, 248, 189, 207, 71, 253, 189, 190, 197, 205, 59, 101, 35, 184, 61, 147, 99, 10, 191, 164, 96, 76, 61, 50, 155, 177, 60, 122, 199, 73, 62, 249, 143, 30, 188, 162, 223, 194, 189, 242, 143, 198, 189, 46, 24, 81, 191, 103, 119, 6, 62, 12, 186, 55, 191, 96, 100, 151, 62, 3, 172, 194, 61, 97, 117, 223, 190, 219, 222, 138, 62, 38, 119, 215, 191, 235, 251, 134, 190, 110, 34, 117, 191, 37, 106, 134, 189, 65, 195, 10, 190, 129, 33, 179, 61, 108, 21, 59, 190, 51, 223, 247, 61, 14, 102, 160, 190, 82, 201, 91, 58, 247, 15, 40, 188, 173, 204, 24, 191, 105, 192, 146, 191, 16, 48, 224, 189, 148, 215, 202, 62, 217, 156, 155, 62, 162, 223, 24, 62, 67, 218, 193, 189, 15, 228, 136, 189, 196, 132, 165, 189, 187, 75, 255, 188, 224, 162, 228, 189, 177, 139, 6, 62, 103, 99, 0, 190, 62, 190, 1, 190, 49, 15, 149, 188, 194, 107, 250, 188, 253, 2, 41, 189, 158, 153, 134, 62, 239, 102, 71, 190, 156, 11, 192, 62, 186, 229, 189, 60, 93, 7, 128, 189, 52, 95, 158, 62, 36, 25, 114, 62, 66, 231, 16, 190, 232, 201, 145, 62, 21, 97, 208, 61, 11, 67, 50, 190, 186, 13, 13, 61, 242, 1, 91, 60, 113, 72, 236, 190, 187, 199, 78, 62, 17, 212, 201, 188, 106, 187, 44, 62, 62, 222, 38, 191, 38, 180, 232, 61, 198, 136, 75, 190, 116, 37, 31, 190, 25, 70, 191, 187, 242, 105, 217, 188, 144, 109, 243, 61, 169, 197, 153, 61, 4, 112, 138, 62, 80, 48, 100, 62, 137, 240, 220, 190, 164, 106, 174, 61, 181, 7, 205, 62, 130, 194, 29, 62, 42, 168, 215, 60, 34, 37, 170, 190, 192, 234, 52, 190, 118, 5, 22, 191, 33, 98, 21, 190, 82, 10, 128, 189, 176, 26, 107, 191, 149, 26, 149, 191, 1, 172, 121, 190, 237, 138, 131, 190, 146, 176, 217, 62, 67, 220, 130, 62, 103, 71, 111, 190, 246, 37, 175, 188, 217, 20, 248, 61, 105, 164, 210, 190, 4, 63, 0, 62, 214, 162, 161, 61, 201, 10, 239, 62, 62, 115, 213, 60, 227, 63, 133, 60, 185, 84, 2, 63, 235, 67, 55, 191, 0, 253, 67, 190, 128, 180, 158, 187, 204, 189, 246, 190, 9, 159, 181, 61, 13, 190, 55, 190, 114, 110, 137, 190, 61, 78, 129, 62, 30, 107, 36, 191, 200, 71, 57, 190, 54, 253, 182, 62, 118, 184, 85, 190, 197, 80, 120, 191, 241, 46, 41, 190, 193, 191, 19, 62, 125, 109, 139, 62, 226, 136, 66, 61, 136, 60, 241, 61, 235, 132, 209, 190, 2, 243, 207, 61, 36, 140, 212, 62, 163, 173, 226, 189, 123, 133, 20, 191, 227, 90, 7, 61, 62, 245, 106, 62, 161, 200, 154, 62, 243, 210, 176, 60, 186, 60, 208, 190, 64, 57, 9, 190, 193, 153, 7, 191, 116, 249, 7, 190, 135, 62, 172, 190, 180, 203, 197, 62, 40, 225, 86, 62, 193, 191, 152, 61, 75, 80, 39, 63, 51, 153, 155, 62, 85, 146, 189, 190, 201, 222, 166, 191, 35, 84, 206, 190, 98, 236, 59, 190, 46, 89, 189, 62, 218, 143, 149, 191, 17, 2, 65, 63, 150, 119, 91, 62, 41, 9, 62, 190, 150, 13, 137, 61, 72, 193, 41, 192, 166, 35, 119, 190, 177, 65, 175, 190, 214, 117, 29, 63, 60, 122, 59, 61, 206, 157, 192, 190, 121, 7, 147, 62, 61, 235, 37, 62, 121, 59, 21, 191, 175, 208, 141, 60, 189, 64, 76, 62, 140, 108, 128, 190, 87, 238, 194, 190, 18, 254, 60, 189, 107, 229, 55, 62, 114, 62, 8, 63, 114, 190, 178, 190, 246, 1, 15, 63, 204, 167, 200, 62, 161, 195, 153, 61, 140, 76, 74, 59, 132, 147, 153, 62, 109, 0, 10, 62, 147, 114, 0, 62, 37, 123, 51, 62, 58, 34, 50, 63, 75, 152, 36, 189, 242, 237, 226, 61, 197, 33, 17, 190, 185, 155, 68, 189, 47, 100, 123, 191, 122, 126, 174, 189, 67, 167, 173, 189, 229, 249, 25, 60, 49, 215, 183, 191, 121, 30, 157, 189, 157, 68, 199, 61, 247, 101, 164, 62, 188, 46, 129, 62, 173, 223, 32, 191, 74, 32, 1, 62, 251, 229, 113, 62, 150, 12, 8, 191, 158, 250, 233, 61, 170, 87, 196, 61, 176, 173, 20, 63, 209, 29, 133, 190, 108, 141, 18, 190, 127, 18, 184, 62, 189, 150, 166, 191, 70, 83, 216, 188, 134, 37, 1, 190, 130, 179, 123, 62, 143, 129, 219, 62, 141, 120, 13, 189, 182, 50, 133, 191, 214, 228, 173, 189, 192, 197, 30, 190, 137, 217, 205, 187, 151, 37, 170, 191, 158, 162, 168, 62, 4, 111, 106, 62, 117, 31, 89, 191, 185, 247, 186, 61, 106, 74, 35, 192, 1, 181, 4, 190, 83, 31, 162, 191, 18, 238, 232, 62, 232, 98, 67, 62, 126, 157, 0, 190, 87, 86, 9, 62, 118, 225, 156, 62, 171, 191, 160, 190, 213, 56, 143, 62, 237, 14, 239, 189, 250, 120, 146, 190, 89, 134, 196, 189, 116, 127, 77, 62, 165, 240, 43, 62, 113, 53, 84, 62, 15, 0, 197, 61, 240, 252, 8, 190, 103, 142, 144, 62, 247, 141, 41, 190, 160, 101, 254, 190, 130, 66, 244, 61, 84, 108, 167, 189, 100, 199, 29, 62, 138, 133, 63, 191, 208, 71, 9, 191, 40, 176, 228, 189, 106, 230, 30, 62, 29, 97, 209, 62, 103, 219, 168, 190, 242, 9, 29, 190, 28, 186, 118, 191, 254, 210, 153, 190, 136, 122, 60, 190, 41, 151, 33, 59, 158, 219, 35, 62, 178, 56, 243, 188, 71, 19, 255, 60, 90, 7, 65, 191, 180, 207, 63, 61, 41, 165, 98, 188, 15, 2, 218, 189, 225, 128, 149, 190, 71, 93, 81, 58, 213, 192, 67, 188, 210, 156, 78, 61, 144, 35, 1, 190, 4, 48, 8, 61, 172, 117, 187, 190, 196, 37, 174, 190, 154, 218, 69, 189, 92, 61, 232, 61, 2, 72, 17, 190, 176, 116, 217, 188, 69, 47, 49, 61, 18, 143, 198, 61, 115, 130, 90, 188, 89, 77, 29, 190, 47, 202, 214, 189, 173, 191, 37, 190, 21, 242, 215, 61, 238, 59, 38, 190, 15, 125, 207, 61, 91, 129, 33, 190, 152, 185, 134, 61, 32, 213, 101, 190, 60, 200, 42, 190, 1, 170, 60, 189, 55, 251, 17, 62, 8, 75, 80, 62, 250, 58, 1, 61, 110, 112, 153, 61, 178, 220, 242, 61, 166, 242, 62, 61, 105, 2, 183, 189, 219, 48, 144, 61, 55, 255, 101, 61, 158, 107, 13, 190, 57, 136, 8, 190, 254, 36, 104, 61, 102, 203, 28, 190, 100, 52, 172, 61, 221, 228, 2, 190, 69, 195, 224, 61, 161, 4, 210, 189, 126, 85, 22, 62, 148, 145, 236, 61, 234, 174, 144, 191, 236, 47, 133, 190, 237, 175, 161, 190, 218, 49, 243, 189, 170, 99, 122, 191, 66, 166, 30, 62, 26, 244, 73, 188, 8, 136, 55, 190, 242, 148, 234, 61, 181, 110, 7, 192, 35, 250, 144, 61, 244, 219, 161, 190, 213, 43, 169, 62, 72, 86, 16, 61, 97, 2, 4, 189, 168, 30, 72, 62, 33, 134, 101, 61, 89, 27, 253, 190, 4, 218, 206, 61, 229, 25, 147, 189, 110, 158, 36, 190, 119, 70, 79, 190, 42, 220, 219, 61, 150, 95, 129, 62, 114, 249, 210, 62, 105, 126, 120, 62, 152, 102, 154, 61, 200, 51, 118, 62, 8, 115, 210, 189, 197, 248, 252, 62, 47, 52, 37, 191, 249, 44, 254, 190, 13, 46, 172, 61, 235, 134, 197, 62, 105, 38, 5, 191, 183, 39, 225, 188, 95, 173, 135, 191, 178, 28, 110, 190, 118, 116, 53, 190, 110, 172, 117, 190, 77, 134, 183, 62, 211, 130, 3, 192, 232, 179, 34, 191, 212, 209, 57, 191, 50, 123, 45, 62, 146, 111, 230, 60, 185, 186, 145, 190, 117, 143, 159, 189, 157, 82, 144, 61, 94, 241, 18, 191, 171, 76, 75, 189, 242, 72, 146, 61, 158, 106, 169, 190, 78, 255, 1, 191, 65, 148, 163, 190, 105, 133, 43, 62, 64, 172, 130, 189, 155, 54, 161, 189, 192, 91, 172, 62, 107, 110, 149, 190, 134, 51, 125, 189, 224, 51, 108, 61, 101, 4, 79, 190, 246, 205, 192, 189, 126, 134, 193, 61, 94, 38, 252, 61, 46, 42, 52, 189, 148, 112, 138, 190, 75, 61, 146, 61, 40, 248, 60, 190, 174, 237, 1, 190, 90, 12, 116, 62, 16, 164, 203, 61, 62, 40, 9, 62, 70, 69, 127, 62, 31, 37, 47, 62, 35, 155, 153, 189, 174, 159, 193, 61, 10, 199, 167, 62, 48, 145, 77, 189, 55, 143, 154, 190, 3, 80, 29, 190, 130, 119, 123, 191, 120, 46, 82, 190, 194, 97, 16, 62, 159, 189, 46, 62, 21, 122, 76, 191, 22, 255, 175, 189, 72, 233, 103, 190, 74, 184, 234, 191, 234, 191, 241, 60, 141, 31, 144, 190, 120, 86, 180, 61, 67, 126, 1, 190, 115, 238, 32, 190, 86, 66, 207, 62, 170, 54, 237, 189, 148, 88, 196, 62, 13, 155, 29, 62, 223, 115, 173, 190, 48, 187, 93, 62, 165, 47, 115, 190, 146, 204, 209, 190, 179, 224, 149, 62, 247, 50, 147, 62, 75, 163, 240, 62, 241, 240, 176, 61, 104, 51, 104, 62, 109, 191, 210, 189, 49, 190, 37, 63, 21, 139, 163, 190, 76, 168, 232, 188, 182, 212, 37, 191, 45, 177, 203, 188, 194, 98, 162, 62, 116, 126, 141, 58, 32, 7, 155, 62, 230, 6, 103, 62, 156, 33, 194, 61, 102, 205, 220, 190, 183, 76, 69, 190, 1, 217, 1, 191, 84, 246, 150, 62, 157, 3, 244, 190, 174, 67, 135, 189, 136, 168, 145, 61, 255, 171, 214, 62, 42, 53, 29, 188, 103, 22, 223, 190, 216, 188, 234, 61, 62, 122, 21, 63, 251, 169, 226, 61, 76, 155, 0, 190, 254, 117, 106, 190, 248, 193, 214, 186, 48, 210, 79, 191, 204, 168, 20, 61, 217, 14, 222, 190, 43, 185, 112, 191, 41, 169, 150, 191, 1, 88, 99, 190, 71, 1, 220, 190, 217, 250, 182, 62, 170, 132, 138, 62, 99, 157, 93, 190, 90, 11, 62, 61, 209, 62, 170, 186, 251, 230, 1, 191, 46, 194, 56, 62, 221, 203, 79, 189, 245, 2, 176, 62, 240, 230, 1, 190, 227, 78, 159, 188, 30, 196, 2, 63, 2, 223, 137, 191, 109, 25, 43, 190, 253, 214, 36, 189, 193, 134, 206, 189, 171, 164, 77, 63, 206, 165, 50, 62, 241, 152, 25, 63, 36, 40, 19, 62, 152, 110, 2, 62, 188, 20, 92, 61, 16, 95, 118, 62, 53, 242, 152, 190, 145, 34, 16, 190, 88, 1, 105, 59, 197, 238, 83, 62, 77, 138, 60, 62, 189, 53, 208, 62, 158, 81, 9, 190, 29, 186, 244, 189, 134, 9, 178, 62, 37, 41, 170, 62, 226, 97, 250, 61, 131, 167, 238, 61, 74, 164, 244, 61, 115, 163, 84, 62, 152, 255, 238, 61, 38, 98, 76, 62, 155, 129, 145, 61, 101, 49, 109, 60, 72, 192, 90, 61, 124, 226, 234, 189, 36, 3, 250, 60, 87, 26, 132, 188, 34, 251, 157, 190, 92, 240, 94, 61, 9, 147, 170, 62, 96, 29, 55, 62, 117, 51, 194, 189, 253, 145, 162, 191, 184, 44, 184, 189, 198, 232, 43, 189, 10, 167, 207, 189, 21, 253, 42, 191, 75, 232, 50, 63, 208, 13, 51, 62, 73, 168, 147, 190, 215, 22, 162, 61, 247, 162, 39, 192, 84, 97, 99, 188, 191, 3, 65, 189, 216, 104, 147, 62, 237, 55, 219, 189, 76, 71, 9, 191, 100, 200, 92, 62, 252, 96, 4, 189, 208, 46, 175, 190, 62, 49, 40, 62, 130, 124, 136, 62, 167, 154, 62, 190, 127, 18, 209, 188, 86, 75, 72, 62, 165, 8, 78, 60, 134, 100, 156, 62, 42, 154, 131, 190, 17, 125, 132, 62, 202, 76, 77, 62, 179, 45, 13, 190, 245, 123, 76, 190, 242, 36, 231, 190, 194, 193, 61, 190, 28, 106, 94, 61, 28, 114, 45, 191, 241, 245, 26, 191, 77, 230, 90, 62, 91, 28, 160, 59, 125, 55, 141, 62, 50, 195, 1, 191, 85, 51, 243, 61, 60, 213, 21, 191, 140, 107, 27, 190, 48, 61, 9, 62, 107, 70, 224, 188, 119, 5, 175, 61, 46, 0, 243, 190, 77, 123, 238, 190, 90, 6, 130, 191, 202, 162, 13, 61, 33, 222, 19, 62, 15, 87, 57, 62, 205, 178, 49, 63, 12, 4, 181, 189, 44, 251, 28, 62, 230, 8, 112, 62, 184, 5, 54, 190, 139, 16, 59, 62, 42, 254, 141, 191, 149, 108, 98, 191, 235, 180, 60, 190, 211, 221, 150, 189, 239, 40, 48, 62, 125, 212, 169, 62, 162, 40, 156, 188, 235, 157, 249, 61, 34, 168, 73, 62, 122, 150, 90, 190, 14, 109, 145, 59, 233, 31, 89, 62, 40, 193, 100, 189, 201, 183, 32, 59, 70, 194, 211, 61, 120, 58, 190, 61, 250, 0, 144, 61, 227, 72, 0, 60, 145, 47, 181, 191, 100, 126, 22, 62, 179, 242, 129, 190, 41, 50, 238, 62, 202, 214, 190, 190, 254, 119, 25, 61, 91, 81, 55, 187, 69, 223, 250, 190, 100, 25, 118, 191, 18, 63, 18, 186, 14, 102, 224, 61, 204, 187, 1, 60, 199, 174, 36, 189, 22, 182, 49, 62, 93, 15, 166, 62, 17, 182, 147, 191, 35, 105, 68, 190, 23, 50, 21, 190, 161, 182, 193, 189, 47, 229, 186, 61, 137, 2, 151, 60, 204, 140, 39, 62, 232, 233, 120, 188, 206, 201, 185, 189, 160, 137, 212, 61, 91, 236, 167, 188, 225, 63, 46, 190, 128, 71, 167, 60, 65, 156, 145, 188, 160, 214, 129, 187, 128, 225, 239, 61, 18, 73, 56, 190, 57, 202, 32, 190, 160, 196, 36, 190, 203, 169, 8, 190, 33, 177, 118, 186, 95, 101, 27, 62, 240, 218, 65, 189, 43, 77, 219, 189, 128, 245, 242, 189, 209, 1, 39, 190, 243, 56, 34, 190, 33, 181, 180, 189, 239, 55, 228, 189, 114, 213, 6, 190, 5, 218, 178, 189, 92, 109, 140, 59, 197, 116, 70, 189, 141, 25, 166, 61, 168, 110, 47, 62, 25, 233, 189, 189, 32, 98, 30, 63, 23, 125, 186, 188, 99, 54, 255, 62, 60, 120, 44, 61, 122, 102, 132, 62, 121, 23, 51, 190, 242, 20, 129, 190, 145, 252, 41, 191, 97, 168, 6, 189, 163, 109, 150, 191, 99, 196, 231, 189, 229, 31, 19, 190, 120, 84, 189, 61, 30, 8, 186, 191, 79, 145, 76, 191, 200, 18, 48, 62, 12, 122, 222, 61, 212, 23, 88, 62, 97, 94, 229, 190, 55, 7, 54, 62, 101, 154, 181, 62, 183, 13, 36, 190, 50, 165, 98, 61, 191, 28, 48, 62, 125, 121, 142, 62, 74, 226, 239, 190, 44, 220, 60, 190, 155, 98, 202, 61, 80, 15, 142, 191, 182, 68, 22, 190, 253, 177, 149, 60, 147, 198, 86, 189, 155, 41, 214, 62, 96, 62, 48, 189, 44, 255, 121, 189, 58, 56, 226, 60, 87, 189, 64, 62, 253, 47, 55, 189, 24, 180, 168, 190, 21, 39, 8, 190, 141, 17, 0, 61, 224, 45, 44, 191, 29, 190, 46, 189, 228, 224, 137, 190, 72, 203, 13, 189, 47, 157, 79, 191, 75, 215, 168, 190, 28, 185, 233, 61, 80, 71, 196, 62, 89, 171, 125, 60, 88, 147, 41, 189, 145, 198, 192, 60, 181, 139, 6, 190, 187, 212, 68, 191, 224, 1, 252, 61, 68, 77, 149, 62, 207, 22, 82, 62, 150, 13, 89, 189, 193, 73, 130, 189, 21, 162, 110, 62, 10, 230, 229, 191, 121, 69, 32, 190, 127, 201, 193, 61, 84, 201, 66, 189, 215, 51, 165, 189, 74, 207, 37, 189, 110, 247, 5, 190, 71, 153, 220, 62, 254, 255, 45, 191, 223, 224, 99, 190, 95, 82, 38, 62, 64, 49, 250, 190, 222, 246, 61, 191, 45, 203, 112, 62, 139, 52, 188, 62, 177, 76, 158, 62, 90, 218, 157, 62, 112, 13, 108, 62, 139, 38, 112, 61, 215, 182, 228, 62, 109, 252, 162, 62, 67, 248, 229, 61, 128, 107, 154, 190, 49, 137, 43, 62, 69, 78, 163, 62, 64, 38, 40, 62, 202, 205, 62, 62, 15, 164, 67, 190, 74, 245, 231, 189, 24, 167, 9, 191, 226, 133, 132, 190, 21, 18, 1, 62, 213, 246, 141, 62, 201, 65, 0, 190};
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
                alignas(float) const unsigned char memory[] = {16, 52, 149, 190, 124, 173, 59, 61, 7, 167, 136, 62, 215, 228, 213, 61, 210, 73, 10, 61, 96, 108, 142, 190, 129, 211, 236, 61, 178, 232, 31, 62, 214, 101, 212, 61, 137, 37, 41, 62, 86, 177, 98, 62, 101, 217, 100, 190, 241, 1, 99, 59, 195, 232, 140, 61, 169, 215, 132, 61, 43, 233, 51, 62, 163, 73, 71, 62, 230, 96, 62, 190, 182, 215, 41, 190, 184, 237, 34, 62, 236, 250, 157, 189, 23, 232, 164, 189, 125, 213, 142, 62, 132, 246, 85, 188, 10, 135, 142, 62, 34, 144, 38, 61, 120, 243, 228, 189, 230, 248, 80, 190, 170, 67, 195, 187, 45, 17, 117, 62, 27, 72, 160, 61, 33, 181, 40, 62};
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
                alignas(float) const unsigned char memory[] = {255, 226, 38, 190, 232, 150, 4, 62, 67, 88, 149, 190, 242, 20, 99, 190, 236, 137, 147, 62, 225, 233, 61, 191, 92, 255, 215, 62, 172, 195, 156, 190, 48, 69, 148, 62, 177, 15, 116, 62, 157, 235, 94, 191, 16, 169, 161, 190, 37, 115, 19, 191, 189, 167, 12, 63, 154, 152, 146, 191, 240, 26, 11, 191, 23, 112, 107, 191, 242, 23, 95, 63, 165, 126, 134, 61, 180, 6, 130, 190, 14, 12, 128, 191, 59, 242, 70, 191, 142, 245, 16, 63, 57, 102, 31, 191, 118, 188, 97, 62, 167, 229, 248, 190, 229, 12, 128, 63, 190, 113, 26, 191, 228, 41, 110, 61, 104, 131, 11, 191, 147, 200, 240, 190, 8, 3, 11, 63, 62, 3, 163, 61, 207, 68, 140, 189, 97, 4, 4, 191, 185, 191, 68, 190, 224, 22, 6, 61, 58, 214, 149, 62, 243, 225, 128, 62, 99, 148, 248, 189, 13, 7, 136, 190, 233, 173, 217, 187, 140, 64, 60, 63, 6, 60, 184, 62, 19, 119, 84, 62, 57, 228, 87, 189, 158, 73, 189, 62, 84, 11, 35, 190, 20, 59, 38, 189, 211, 184, 154, 61, 184, 150, 170, 189, 10, 158, 171, 190, 226, 151, 145, 61, 248, 100, 8, 62, 83, 172, 137, 62, 66, 176, 219, 62, 19, 22, 110, 190, 40, 150, 167, 189, 72, 148, 215, 60, 207, 37, 90, 190, 85, 91, 219, 61, 113, 156, 179, 190, 6, 186, 75, 61, 82, 155, 20, 190};
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
                alignas(float) const unsigned char memory[] = {221, 88, 180, 61, 139, 255, 205, 190};
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
    alignas(float) const unsigned char memory[] = {175, 161, 244, 63, 85, 39, 163, 63, 221, 91, 113, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {123, 176, 128, 63, 212, 25, 77, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0050/steps/000000000018000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
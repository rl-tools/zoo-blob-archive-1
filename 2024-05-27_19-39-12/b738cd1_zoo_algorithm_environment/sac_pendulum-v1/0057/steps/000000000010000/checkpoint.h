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
                alignas(float) const unsigned char memory[] = {48, 91, 55, 63, 29, 178, 225, 62, 27, 69, 129, 62, 87, 128, 103, 62, 159, 20, 217, 62, 31, 108, 97, 190, 113, 123, 175, 190, 195, 156, 182, 191, 213, 114, 163, 190, 135, 251, 168, 190, 137, 1, 63, 191, 135, 234, 145, 62, 160, 50, 92, 61, 254, 109, 187, 62, 157, 63, 4, 63, 149, 160, 255, 62, 103, 185, 155, 190, 73, 113, 12, 63, 69, 59, 211, 189, 43, 86, 85, 62, 92, 48, 14, 63, 161, 117, 13, 190, 110, 106, 196, 61, 51, 69, 145, 190, 102, 34, 184, 62, 52, 175, 16, 63, 46, 106, 249, 190, 56, 143, 76, 63, 80, 196, 12, 191, 249, 20, 141, 190, 157, 191, 105, 63, 252, 67, 125, 63, 188, 83, 149, 62, 4, 247, 246, 190, 20, 226, 184, 62, 180, 231, 39, 190, 34, 154, 223, 190, 242, 82, 78, 63, 83, 157, 59, 62, 38, 220, 24, 63, 241, 187, 168, 63, 168, 158, 34, 62, 164, 32, 2, 191, 192, 79, 197, 190, 173, 135, 211, 190, 231, 213, 160, 190, 141, 161, 149, 62, 75, 83, 139, 190, 181, 101, 13, 63, 189, 82, 198, 190, 166, 146, 131, 190, 66, 83, 189, 190, 85, 188, 133, 191, 132, 124, 58, 187, 190, 236, 235, 190, 220, 83, 205, 63, 164, 179, 9, 63, 216, 12, 213, 62, 181, 177, 46, 191, 223, 34, 127, 62, 193, 67, 240, 189, 31, 213, 59, 63, 196, 136, 242, 62, 30, 122, 4, 61, 79, 111, 201, 62, 154, 96, 4, 191, 157, 28, 183, 62, 99, 86, 94, 63, 141, 172, 87, 62, 96, 26, 24, 63, 226, 51, 97, 191, 116, 127, 216, 190, 130, 247, 92, 63, 86, 142, 77, 190, 225, 202, 136, 190, 209, 200, 47, 191, 35, 204, 53, 191, 222, 174, 98, 190, 105, 48, 39, 191, 137, 21, 78, 61, 207, 7, 241, 62, 215, 234, 17, 63, 71, 124, 247, 190, 25, 131, 173, 58, 173, 84, 130, 61, 22, 224, 145, 190, 216, 109, 241, 62, 168, 96, 146, 190, 105, 49, 180, 62, 42, 45, 170, 62, 26, 25, 73, 63, 175, 19, 91, 191, 157, 240, 203, 190, 106, 245, 162, 190, 102, 100, 161, 62, 145, 51, 23, 63};
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
                alignas(float) const unsigned char memory[] = {246, 127, 45, 191, 58, 227, 188, 62, 170, 156, 208, 189, 162, 78, 35, 191, 207, 102, 180, 62, 198, 247, 186, 190, 175, 10, 8, 191, 11, 59, 203, 190, 114, 236, 0, 191, 29, 198, 112, 62, 54, 104, 177, 190, 126, 98, 189, 62, 135, 78, 36, 63, 143, 142, 20, 61, 97, 139, 128, 190, 255, 235, 95, 62, 143, 121, 27, 191, 229, 43, 16, 63, 114, 43, 236, 190, 126, 66, 93, 62, 10, 220, 241, 190, 149, 157, 52, 61, 254, 127, 182, 62, 0, 12, 6, 191, 89, 1, 217, 62, 35, 226, 4, 191, 103, 193, 247, 62, 26, 171, 50, 63, 132, 69, 9, 191, 186, 61, 174, 190, 46, 143, 25, 191, 61, 15, 30, 61};
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
                alignas(float) const unsigned char memory[] = {232, 185, 245, 190, 13, 167, 209, 189, 11, 58, 99, 62, 40, 235, 115, 62, 154, 98, 95, 190, 41, 117, 171, 189, 64, 72, 233, 189, 173, 236, 197, 61, 167, 105, 233, 189, 139, 208, 173, 189, 216, 68, 128, 191, 81, 174, 63, 59, 238, 231, 80, 189, 183, 151, 217, 190, 123, 124, 207, 189, 190, 112, 123, 190, 128, 6, 218, 189, 27, 69, 157, 62, 224, 158, 65, 190, 142, 25, 143, 62, 2, 240, 155, 190, 94, 234, 207, 61, 174, 47, 85, 190, 229, 193, 25, 189, 236, 11, 111, 61, 92, 184, 105, 189, 22, 16, 27, 62, 224, 87, 65, 62, 169, 210, 206, 61, 46, 31, 157, 190, 117, 63, 170, 60, 240, 66, 251, 189, 43, 45, 55, 188, 251, 9, 100, 62, 137, 176, 86, 62, 198, 156, 241, 190, 80, 183, 135, 61, 25, 238, 35, 62, 41, 191, 200, 62, 110, 68, 115, 188, 72, 194, 192, 189, 110, 125, 25, 190, 120, 119, 222, 62, 59, 232, 37, 62, 156, 231, 253, 60, 138, 98, 168, 62, 59, 76, 170, 62, 161, 48, 146, 62, 8, 0, 199, 190, 29, 150, 143, 61, 92, 251, 253, 190, 9, 182, 163, 190, 215, 98, 140, 62, 183, 1, 110, 190, 148, 198, 1, 62, 145, 27, 177, 190, 53, 167, 81, 189, 98, 237, 149, 62, 183, 191, 209, 189, 165, 35, 66, 62, 254, 172, 56, 62, 7, 213, 60, 191, 6, 104, 160, 190, 244, 211, 31, 190, 102, 207, 43, 63, 190, 208, 234, 189, 66, 86, 3, 190, 33, 78, 204, 60, 251, 107, 252, 60, 163, 134, 1, 62, 197, 101, 172, 61, 176, 104, 158, 190, 135, 215, 15, 62, 111, 31, 158, 61, 164, 184, 230, 62, 85, 86, 161, 190, 189, 76, 80, 189, 236, 216, 165, 62, 151, 67, 157, 190, 151, 251, 88, 186, 204, 92, 202, 60, 180, 255, 201, 190, 220, 92, 3, 190, 181, 110, 31, 190, 225, 34, 154, 60, 162, 56, 30, 62, 204, 43, 205, 61, 100, 215, 2, 191, 122, 124, 137, 61, 124, 12, 189, 188, 230, 80, 57, 190, 231, 189, 96, 61, 49, 46, 128, 61, 34, 141, 100, 188, 59, 208, 178, 190, 232, 242, 56, 188, 34, 157, 134, 191, 84, 136, 181, 189, 19, 106, 143, 190, 240, 26, 163, 62, 154, 191, 109, 62, 19, 161, 78, 190, 69, 189, 164, 190, 214, 50, 242, 61, 150, 145, 111, 62, 104, 47, 163, 62, 222, 199, 134, 191, 162, 126, 163, 61, 210, 77, 223, 190, 216, 87, 7, 191, 156, 153, 8, 191, 9, 32, 227, 189, 126, 157, 58, 62, 26, 74, 90, 189, 14, 154, 125, 61, 173, 141, 222, 62, 234, 209, 135, 190, 133, 19, 87, 62, 135, 102, 90, 190, 206, 216, 155, 61, 178, 220, 117, 62, 8, 239, 183, 190, 136, 8, 22, 62, 214, 142, 138, 61, 213, 0, 151, 189, 169, 179, 202, 189, 30, 94, 203, 62, 106, 53, 161, 61, 244, 118, 29, 190, 160, 211, 218, 187, 159, 252, 164, 61, 55, 236, 135, 189, 47, 181, 175, 59, 138, 218, 11, 189, 213, 128, 37, 189, 254, 176, 143, 61, 173, 224, 149, 60, 44, 175, 200, 189, 127, 172, 37, 62, 124, 152, 21, 61, 151, 111, 28, 61, 219, 59, 0, 190, 67, 154, 63, 188, 40, 142, 33, 190, 65, 123, 79, 188, 103, 154, 143, 187, 230, 112, 67, 189, 237, 239, 180, 189, 249, 103, 98, 61, 176, 76, 9, 190, 220, 255, 42, 190, 14, 24, 250, 189, 224, 83, 111, 60, 130, 112, 19, 62, 141, 175, 20, 190, 119, 204, 255, 61, 77, 117, 174, 189, 201, 225, 36, 190, 89, 148, 254, 189, 157, 144, 144, 189, 50, 169, 88, 190, 162, 87, 210, 61, 171, 118, 117, 189, 47, 94, 34, 62, 125, 134, 205, 189, 50, 196, 86, 189, 65, 65, 151, 189, 39, 213, 196, 186, 30, 3, 138, 61, 159, 5, 33, 62, 115, 109, 57, 191, 233, 109, 3, 189, 34, 178, 31, 191, 210, 221, 133, 190, 246, 162, 89, 188, 56, 146, 98, 61, 213, 132, 186, 189, 148, 134, 21, 60, 2, 44, 47, 190, 54, 22, 155, 62, 247, 0, 121, 190, 189, 56, 86, 61, 31, 27, 178, 190, 35, 144, 230, 58, 234, 124, 151, 189, 40, 166, 113, 61, 70, 66, 59, 188, 34, 232, 139, 61, 121, 180, 64, 62, 94, 77, 227, 189, 73, 1, 79, 62, 196, 53, 162, 61, 224, 49, 11, 63, 45, 81, 171, 190, 209, 23, 10, 62, 24, 140, 181, 190, 57, 2, 189, 189, 209, 102, 47, 62, 201, 9, 67, 62, 119, 233, 162, 189, 130, 144, 214, 189, 187, 180, 83, 189, 30, 51, 107, 62, 238, 182, 48, 190, 41, 253, 97, 190, 10, 184, 123, 62, 166, 246, 172, 190, 95, 97, 44, 189, 20, 96, 72, 190, 85, 67, 79, 62, 238, 125, 164, 61, 233, 1, 105, 62, 58, 160, 189, 61, 0, 18, 193, 189, 157, 254, 146, 189, 205, 253, 65, 62, 218, 186, 44, 189, 195, 65, 136, 190, 39, 214, 149, 190, 42, 235, 230, 187, 25, 134, 190, 61, 191, 191, 138, 61, 139, 87, 49, 62, 7, 52, 16, 190, 217, 79, 132, 191, 229, 200, 34, 62, 40, 12, 42, 190, 71, 155, 56, 189, 53, 102, 61, 62, 208, 70, 83, 190, 223, 94, 236, 189, 254, 190, 115, 190, 224, 132, 39, 187, 129, 239, 147, 62, 29, 9, 86, 191, 224, 62, 161, 190, 72, 151, 170, 61, 21, 123, 6, 190, 109, 57, 22, 191, 176, 98, 237, 190, 26, 53, 10, 190, 210, 22, 38, 58, 152, 105, 137, 62, 237, 42, 194, 61, 94, 145, 33, 187, 248, 170, 155, 189, 24, 234, 146, 61, 255, 30, 14, 62, 97, 137, 112, 62, 248, 208, 2, 191, 220, 116, 125, 62, 248, 124, 41, 62, 22, 76, 246, 189, 60, 168, 167, 189, 195, 125, 62, 61, 39, 23, 58, 61, 161, 147, 3, 191, 137, 188, 117, 62, 166, 83, 178, 190, 76, 143, 21, 62, 165, 10, 129, 189, 170, 90, 105, 60, 178, 97, 68, 189, 8, 176, 213, 189, 231, 47, 178, 189, 161, 60, 177, 189, 162, 57, 45, 191, 158, 241, 231, 188, 75, 51, 66, 187, 253, 247, 148, 190, 218, 201, 189, 61, 171, 28, 48, 62, 189, 67, 51, 62, 221, 218, 30, 62, 78, 23, 128, 190, 172, 196, 51, 189, 203, 237, 232, 190, 192, 159, 157, 61, 162, 118, 60, 190, 182, 112, 35, 190, 93, 168, 64, 189, 133, 151, 40, 62, 227, 89, 235, 61, 185, 80, 136, 62, 132, 131, 180, 61, 100, 65, 59, 188, 45, 23, 191, 189, 34, 117, 176, 61, 157, 192, 190, 62, 219, 226, 235, 188, 228, 122, 201, 60, 134, 68, 16, 191, 40, 102, 19, 189, 106, 86, 64, 61, 108, 198, 132, 60, 209, 45, 78, 190, 24, 77, 82, 190, 132, 249, 233, 190, 245, 15, 228, 62, 207, 103, 12, 62, 116, 37, 179, 62, 130, 171, 227, 61, 179, 173, 40, 62, 80, 96, 51, 62, 108, 3, 171, 190, 224, 184, 58, 61, 39, 187, 80, 190, 221, 236, 133, 190, 204, 92, 216, 189, 91, 249, 182, 61, 186, 72, 104, 62, 28, 12, 41, 190, 228, 127, 78, 190, 30, 66, 196, 61, 141, 172, 201, 189, 2, 137, 129, 188, 119, 97, 136, 61, 231, 94, 35, 190, 1, 158, 132, 190, 111, 93, 34, 191, 188, 109, 65, 191, 205, 193, 94, 190, 185, 222, 136, 191, 140, 51, 156, 59, 207, 154, 185, 189, 252, 174, 22, 190, 247, 195, 116, 190, 247, 132, 74, 189, 146, 163, 157, 62, 233, 133, 78, 62, 214, 35, 140, 191, 100, 153, 134, 190, 25, 77, 59, 61, 211, 80, 12, 191, 14, 47, 135, 191, 217, 202, 250, 187, 101, 61, 176, 60, 159, 201, 110, 62, 244, 104, 5, 62, 177, 76, 91, 62, 91, 235, 22, 190, 48, 64, 64, 62, 105, 26, 48, 188, 229, 125, 81, 62, 169, 85, 141, 61, 96, 153, 119, 191, 210, 123, 1, 62, 20, 229, 175, 59, 44, 204, 196, 189, 127, 78, 158, 61, 9, 158, 221, 61, 190, 117, 103, 62, 6, 64, 19, 191, 208, 22, 93, 62, 250, 155, 60, 191, 180, 21, 105, 61, 79, 114, 226, 61, 26, 137, 242, 188, 170, 240, 113, 189, 179, 166, 152, 62, 1, 225, 26, 190, 180, 248, 239, 190, 77, 46, 55, 191, 34, 249, 189, 189, 164, 219, 174, 62, 70, 52, 199, 189, 20, 119, 143, 191, 83, 38, 124, 190, 39, 81, 111, 190, 45, 159, 46, 190, 121, 48, 216, 61, 142, 244, 64, 190, 140, 65, 34, 190, 5, 212, 237, 60, 211, 9, 145, 61, 173, 94, 198, 190, 141, 72, 203, 190, 112, 9, 128, 191, 57, 71, 151, 62, 239, 213, 108, 191, 138, 37, 219, 189, 57, 107, 113, 189, 65, 228, 205, 189, 44, 101, 122, 62, 75, 208, 80, 191, 41, 116, 236, 189, 196, 116, 2, 191, 196, 17, 59, 62, 229, 117, 189, 189, 243, 249, 4, 61, 160, 178, 3, 61, 170, 95, 113, 190, 191, 208, 119, 190, 186, 43, 135, 62, 120, 248, 242, 190, 28, 119, 141, 190, 240, 114, 240, 189, 126, 198, 205, 61, 232, 37, 102, 190, 52, 181, 3, 191, 173, 26, 62, 191, 155, 239, 107, 62, 77, 145, 130, 189, 178, 243, 193, 61, 143, 2, 93, 61, 105, 30, 0, 191, 111, 98, 171, 61, 244, 91, 104, 190, 198, 140, 127, 62, 190, 249, 153, 61, 101, 191, 173, 61, 19, 226, 70, 62, 246, 29, 81, 190, 5, 181, 91, 190, 194, 196, 162, 190, 140, 130, 93, 189, 199, 199, 140, 191, 170, 85, 56, 62, 52, 178, 182, 189, 7, 97, 106, 62, 190, 24, 222, 61, 6, 54, 87, 61, 171, 132, 134, 190, 52, 86, 110, 62, 151, 73, 157, 62, 161, 85, 131, 62, 241, 237, 122, 191, 98, 218, 80, 190, 255, 137, 209, 190, 245, 235, 20, 191, 245, 74, 238, 190, 13, 130, 170, 190, 42, 137, 193, 62, 146, 155, 49, 61, 54, 153, 185, 60, 165, 192, 128, 61, 134, 215, 12, 190, 235, 173, 165, 61, 218, 118, 157, 189, 202, 93, 141, 62, 159, 47, 83, 62, 165, 172, 40, 190, 227, 186, 135, 62, 63, 87, 123, 62, 77, 77, 77, 190, 22, 186, 136, 61, 167, 200, 214, 62, 50, 202, 46, 59, 192, 51, 32, 191, 243, 23, 0, 62, 201, 232, 196, 59, 201, 77, 100, 190, 156, 218, 189, 188, 133, 9, 139, 190, 251, 103, 136, 190, 18, 79, 186, 60, 221, 148, 103, 61, 11, 90, 43, 62, 35, 212, 108, 61, 239, 168, 207, 61, 30, 237, 184, 189, 231, 162, 229, 60, 86, 150, 166, 190, 188, 223, 216, 189, 123, 56, 67, 61, 166, 113, 19, 62, 205, 146, 18, 191, 30, 201, 182, 61, 65, 226, 138, 61, 208, 163, 84, 186, 83, 231, 9, 190, 108, 90, 218, 189, 107, 142, 116, 62, 53, 194, 51, 188, 158, 161, 156, 190, 9, 70, 139, 61, 163, 235, 229, 190, 55, 1, 98, 190, 52, 75, 129, 61, 158, 105, 142, 190, 171, 146, 47, 189, 147, 134, 214, 61, 140, 73, 133, 61, 210, 186, 143, 189, 112, 225, 93, 61, 73, 45, 11, 190, 75, 163, 100, 188, 53, 17, 10, 190, 81, 72, 44, 62, 7, 169, 5, 189, 136, 82, 180, 189, 61, 60, 41, 190, 3, 77, 182, 189, 124, 253, 152, 189, 204, 215, 28, 190, 155, 191, 210, 60, 15, 152, 2, 62, 160, 71, 36, 190, 36, 185, 17, 190, 151, 58, 38, 190, 26, 62, 32, 190, 28, 248, 149, 189, 121, 201, 104, 189, 223, 186, 200, 189, 90, 164, 199, 189, 125, 108, 231, 61, 65, 231, 249, 59, 38, 24, 53, 190, 199, 102, 42, 189, 19, 129, 23, 62, 142, 37, 44, 189, 242, 195, 128, 60, 104, 227, 161, 189, 115, 235, 139, 190, 140, 215, 152, 188, 79, 211, 152, 190, 32, 184, 59, 190, 116, 149, 109, 189, 193, 224, 165, 190, 206, 232, 126, 190, 28, 172, 127, 190, 249, 179, 191, 189, 144, 107, 63, 190, 168, 94, 211, 61, 41, 238, 17, 62, 68, 70, 130, 190, 50, 174, 18, 190, 121, 187, 4, 191, 70, 149, 159, 61, 104, 231, 37, 62, 233, 220, 63, 191, 26, 141, 207, 190, 226, 201, 238, 189, 255, 227, 164, 190, 248, 64, 60, 190, 202, 163, 150, 190, 24, 169, 53, 190, 252, 238, 214, 188, 100, 95, 174, 62, 45, 27, 177, 190, 159, 233, 46, 191, 231, 149, 148, 191, 160, 93, 23, 189, 80, 17, 51, 61, 61, 97, 179, 189, 141, 135, 27, 62, 116, 145, 154, 190, 130, 224, 15, 191, 237, 160, 38, 61, 171, 25, 232, 189, 50, 118, 14, 190, 16, 246, 71, 61, 85, 221, 196, 190, 78, 15, 179, 190, 145, 21, 226, 188, 239, 97, 197, 62, 194, 99, 102, 62, 112, 155, 49, 58, 72, 211, 28, 191, 234, 9, 226, 61, 10, 174, 24, 189, 243, 40, 63, 191, 152, 179, 242, 60, 56, 206, 207, 190, 214, 250, 53, 62, 120, 217, 224, 188, 69, 116, 0, 62, 104, 157, 126, 190, 102, 75, 3, 191, 179, 10, 196, 190, 218, 124, 8, 190, 78, 18, 240, 190, 57, 184, 51, 190, 93, 155, 164, 190, 243, 27, 73, 190, 190, 142, 181, 187, 81, 104, 254, 190, 159, 41, 65, 62, 120, 221, 56, 62, 45, 186, 21, 191, 53, 144, 15, 190, 205, 50, 8, 62, 15, 128, 58, 190, 35, 26, 140, 188, 129, 44, 196, 190, 160, 1, 195, 189, 192, 106, 141, 62, 221, 53, 103, 62, 237, 217, 118, 62, 194, 166, 180, 62, 239, 30, 157, 62, 61, 35, 108, 62, 72, 101, 176, 190, 48, 132, 12, 62, 79, 12, 103, 191, 235, 98, 195, 189, 47, 250, 213, 60, 152, 171, 130, 189, 37, 2, 113, 189, 185, 86, 172, 190, 4, 214, 55, 189, 188, 197, 127, 62, 95, 44, 9, 190, 251, 225, 206, 61, 14, 60, 159, 190, 216, 36, 88, 191, 11, 89, 129, 190, 251, 68, 203, 190, 204, 63, 23, 189, 168, 10, 24, 190, 161, 175, 26, 190, 160, 237, 148, 61, 156, 249, 137, 189, 109, 169, 182, 189, 156, 43, 179, 188, 228, 4, 186, 61, 115, 245, 166, 60, 35, 28, 23, 62, 100, 224, 192, 189, 18, 235, 7, 62, 129, 68, 25, 61, 105, 231, 243, 189, 53, 190, 203, 189, 34, 170, 207, 189, 86, 82, 13, 190, 100, 96, 55, 61, 31, 14, 74, 61, 249, 89, 166, 188, 96, 88, 255, 189, 61, 134, 164, 187, 109, 165, 131, 189, 55, 110, 56, 61, 61, 155, 101, 189, 229, 205, 200, 189, 191, 77, 105, 189, 56, 155, 189, 60, 27, 131, 253, 189, 46, 214, 25, 190, 117, 34, 217, 189, 204, 92, 13, 61, 150, 159, 52, 61, 28, 161, 182, 188, 145, 122, 136, 62, 233, 246, 36, 191, 70, 117, 163, 190, 193, 11, 55, 190, 168, 214, 146, 190, 195, 8, 72, 61, 29, 54, 161, 61, 65, 66, 253, 189, 42, 205, 150, 60, 104, 130, 20, 62, 63, 76, 2, 188, 72, 22, 137, 189, 239, 74, 33, 61, 90, 184, 37, 190, 25, 95, 79, 190, 78, 154, 212, 62, 71, 155, 56, 191, 139, 204, 23, 190, 65, 84, 162, 189, 213, 206, 138, 189, 106, 103, 91, 190, 61, 154, 247, 187, 169, 102, 26, 190, 77, 19, 165, 62, 6, 116, 151, 61, 243, 207, 95, 190, 182, 189, 128, 190, 231, 55, 216, 190, 8, 208, 21, 190, 146, 120, 121, 190, 146, 91, 89, 190, 72, 73, 116, 189, 74, 82, 132, 61, 135, 158, 146, 190, 212, 197, 155, 61, 155, 144, 84, 190, 74, 132, 226, 60, 5, 84, 73, 190, 121, 197, 133, 61, 235, 251, 195, 61, 161, 57, 145, 62, 83, 222, 106, 62, 79, 235, 231, 62, 254, 7, 2, 62, 242, 165, 236, 61, 183, 166, 52, 62, 5, 133, 134, 190, 237, 170, 161, 62, 108, 159, 29, 190, 151, 177, 58, 190, 128, 213, 107, 189, 96, 175, 18, 59, 114, 112, 6, 189, 179, 136, 202, 59, 10, 214, 233, 61, 127, 136, 197, 61, 124, 138, 209, 61, 235, 158, 187, 61, 208, 9, 28, 61, 4, 30, 115, 190, 91, 188, 6, 59, 113, 161, 217, 189, 241, 96, 210, 190, 170, 18, 152, 62, 82, 96, 10, 61, 46, 46, 96, 189, 203, 44, 124, 62, 178, 142, 135, 62, 221, 44, 119, 189, 70, 3, 180, 189, 146, 155, 241, 189, 231, 232, 168, 60, 184, 200, 151, 62, 23, 79, 22, 62, 239, 163, 96, 62, 167, 100, 148, 62, 9, 159, 178, 62, 50, 55, 139, 61, 103, 81, 101, 190, 177, 219, 55, 62, 156, 252, 159, 189, 206, 160, 38, 62, 31, 64, 110, 187, 122, 240, 37, 187, 105, 28, 121, 62, 215, 229, 139, 190, 145, 54, 101, 61, 136, 216, 173, 61, 133, 164, 71, 62, 236, 237, 157, 62, 172, 9, 45, 62, 197, 163, 6, 62, 138, 79, 198, 189, 147, 197, 132, 61, 148, 110, 221, 189, 66, 64, 187, 187, 48, 122, 52, 190, 105, 149, 126, 60, 35, 2, 34, 189, 165, 58, 145, 61, 211, 213, 74, 190, 59, 237, 83, 187, 203, 19, 14, 189, 50, 66, 107, 189, 69, 151, 221, 61, 15, 239, 89, 61, 240, 44, 198, 188, 143, 206, 161, 189, 210, 118, 238, 189, 128, 29, 120, 189, 230, 225, 19, 62, 211, 228, 248, 59, 36, 62, 17, 189, 173, 137, 19, 190, 82, 215, 181, 189, 128, 80, 20, 62, 79, 170, 241, 189, 23, 17, 5, 189, 18, 183, 2, 190, 63, 247, 41, 62, 97, 238, 225, 61, 45, 139, 182, 189, 40, 44, 178, 61, 231, 109, 209, 189, 132, 155, 206, 189, 134, 227, 80, 61, 122, 23, 168, 189, 82, 163, 82, 62, 222, 251, 135, 190, 96, 185, 113, 190, 103, 81, 194, 187, 0, 34, 185, 62, 177, 25, 96, 61, 36, 166, 219, 189, 184, 225, 54, 61, 96, 116, 142, 190, 26, 203, 58, 63, 217, 162, 80, 62, 4, 95, 108, 62, 129, 7, 14, 63, 122, 44, 190, 60, 3, 54, 139, 62, 206, 252, 175, 190, 211, 248, 178, 61, 47, 144, 128, 191, 143, 229, 137, 60, 68, 134, 66, 188, 36, 210, 48, 190, 146, 59, 79, 188, 124, 201, 193, 190, 185, 34, 236, 61, 20, 152, 142, 61, 117, 33, 166, 189, 209, 148, 20, 190, 131, 50, 232, 61, 202, 95, 108, 191, 191, 56, 182, 190, 177, 242, 154, 190, 245, 41, 95, 191, 92, 255, 90, 62, 56, 228, 21, 191, 32, 148, 0, 62, 86, 115, 238, 61, 120, 22, 158, 190, 238, 185, 15, 190, 129, 45, 103, 190, 202, 73, 139, 190, 19, 222, 224, 60, 81, 160, 252, 190, 59, 70, 197, 190, 93, 46, 200, 62, 177, 159, 69, 189, 7, 31, 183, 191, 57, 19, 219, 190, 193, 140, 13, 189, 142, 14, 0, 61, 13, 130, 223, 59, 221, 0, 228, 61, 219, 105, 115, 190, 20, 153, 47, 62, 118, 224, 131, 62, 161, 34, 139, 189, 21, 61, 201, 188, 60, 22, 189, 191, 213, 85, 155, 61, 95, 146, 68, 189, 88, 208, 53, 190, 67, 159, 246, 61, 10, 121, 148, 60, 37, 176, 47, 62, 99, 21, 140, 61, 119, 166, 248, 189, 135, 27, 18, 62, 2, 230, 242, 189, 6, 188, 186, 61, 100, 201, 70, 62, 95, 18, 173, 189, 151, 168, 134, 189, 70, 119, 125, 190, 98, 238, 195, 61, 213, 185, 18, 189, 46, 216, 171, 189, 235, 248, 127, 190, 250, 35, 6, 62, 250, 42, 251, 188, 2, 35, 114, 190, 45, 78, 149, 189, 171, 158, 73, 62, 43, 100, 133, 190, 180, 158, 240, 61, 195, 113, 193, 190, 140, 167, 98, 61, 28, 29, 55, 189, 41, 238, 251, 61, 114, 103, 120, 62, 188, 4, 178, 61, 182, 23, 52, 61, 133, 91, 158, 62, 74, 10, 21, 62, 60, 82, 26, 191, 82, 136, 14, 188, 49, 95, 86, 189, 87, 145, 177, 189, 142, 72, 196, 61, 255, 169, 44, 189, 181, 96, 103, 60, 250, 217, 205, 188, 78, 139, 143, 189, 236, 59, 66, 189, 46, 91, 1, 188, 93, 79, 232, 189, 250, 113, 230, 189, 202, 107, 228, 60, 152, 126, 10, 190, 19, 143, 190, 189, 183, 21, 77, 190, 43, 3, 250, 187, 39, 133, 99, 189, 121, 245, 21, 62, 144, 255, 25, 190, 89, 185, 232, 189, 117, 206, 66, 190, 140, 202, 5, 62, 167, 97, 216, 189, 141, 210, 251, 61, 175, 11, 205, 61, 252, 199, 19, 62, 161, 113, 218, 61, 123, 77, 250, 61, 112, 100, 15, 190, 183, 175, 194, 189, 150, 78, 44, 61, 185, 177, 58, 189, 28, 164, 134, 61, 232, 222, 34, 190, 34, 21, 235, 189, 73, 137, 165, 61, 164, 138, 146, 62, 152, 37, 79, 61, 183, 44, 233, 189, 246, 241, 195, 189, 57, 209, 33, 62, 58, 35, 131, 60, 72, 122, 141, 62, 190, 16, 161, 191, 13, 179, 187, 190, 161, 61, 61, 190, 33, 48, 33, 191, 34, 248, 144, 189, 69, 55, 35, 190, 12, 202, 182, 62, 157, 75, 45, 60, 188, 108, 186, 188, 115, 116, 138, 62, 81, 130, 149, 190, 194, 54, 168, 189, 121, 64, 138, 191, 81, 146, 52, 62, 131, 159, 29, 62, 198, 201, 85, 190, 252, 80, 154, 189, 83, 75, 38, 61, 82, 140, 130, 189, 49, 237, 71, 62, 126, 146, 224, 62, 25, 58, 6, 60, 211, 50, 36, 190, 16, 114, 56, 188, 114, 74, 66, 61, 190, 40, 194, 189, 221, 180, 94, 62, 156, 226, 115, 62, 174, 168, 144, 62, 47, 5, 136, 190, 40, 4, 30, 191, 54, 1, 147, 189, 90, 232, 223, 62, 72, 119, 6, 62, 215, 65, 141, 189, 241, 27, 180, 61, 238, 226, 244, 189, 178, 34, 111, 189, 29, 190, 108, 191, 94, 21, 92, 190, 162, 161, 133, 189, 0, 119, 44, 62, 102, 35, 119, 62, 204, 77, 53, 191, 148, 25, 48, 62, 46, 58, 158, 190, 116, 61, 69, 190, 122, 6, 89, 189, 217, 112, 4, 62, 154, 215, 40, 62, 131, 169, 212, 61, 211, 57, 219, 189, 179, 34, 246, 189, 203, 137, 77, 62, 131, 15, 202, 59, 189, 88, 121, 62, 166, 123, 89, 62, 250, 218, 118, 190, 138, 16, 111, 189, 60, 130, 62, 190, 239, 59, 167, 190, 63, 127, 165, 189, 111, 74, 246, 61, 38, 239, 44, 190, 25, 23, 196, 61, 34, 254, 44, 61, 83, 137, 146, 189, 7, 44, 0, 61, 21, 65, 189, 62, 65, 129, 177, 62, 20, 37, 130, 62, 244, 1, 32, 189, 15, 58, 174, 189, 187, 81, 112, 191, 0, 81, 192, 61, 86, 211, 31, 62, 248, 10, 158, 62, 139, 80, 193, 189, 144, 19, 62, 190, 177, 35, 92, 62, 45, 219, 67, 189, 111, 123, 130, 190, 208, 43, 161, 190, 41, 143, 244, 61, 147, 252, 76, 62, 30, 254, 157, 190, 109, 60, 21, 62, 177, 224, 200, 59, 171, 144, 23, 62, 123, 201, 74, 61, 106, 114, 50, 190, 229, 32, 233, 188, 4, 227, 128, 61, 244, 42, 239, 189, 166, 220, 41, 190, 249, 222, 39, 62, 24, 242, 32, 61, 248, 123, 10, 189, 132, 81, 160, 189, 144, 189, 179, 189, 3, 119, 190, 188, 10, 56, 180, 189, 31, 202, 118, 189, 14, 99, 138, 189, 158, 158, 132, 189, 4, 158, 227, 189, 89, 77, 3, 190, 59, 90, 41, 190, 103, 58, 36, 61, 20, 40, 113, 185, 74, 255, 193, 60, 92, 5, 183, 189, 128, 55, 152, 189, 196, 74, 142, 189, 235, 162, 121, 61, 5, 70, 167, 61, 245, 226, 225, 189, 177, 184, 137, 189};
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
                alignas(float) const unsigned char memory[] = {89, 10, 128, 62, 180, 118, 106, 62, 184, 5, 11, 190, 107, 206, 182, 61, 112, 119, 14, 190, 40, 141, 5, 62, 181, 202, 178, 190, 72, 117, 216, 61, 141, 105, 1, 62, 181, 100, 89, 62, 176, 147, 5, 62, 222, 171, 88, 61, 217, 216, 97, 62, 82, 87, 207, 187, 59, 88, 179, 61, 107, 47, 13, 62, 178, 39, 210, 189, 183, 96, 39, 189, 22, 96, 150, 62, 172, 168, 6, 190, 157, 170, 127, 62, 20, 192, 193, 62, 121, 171, 190, 62, 51, 253, 229, 189, 246, 174, 59, 62, 232, 255, 163, 62, 186, 68, 164, 61, 142, 160, 184, 189, 221, 179, 70, 188, 14, 109, 219, 61, 28, 120, 103, 190, 236, 135, 195, 189};
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
                alignas(float) const unsigned char memory[] = {50, 23, 205, 62, 5, 61, 47, 191, 112, 241, 77, 62, 254, 120, 40, 63, 5, 66, 33, 61, 251, 31, 5, 62, 189, 23, 100, 62, 78, 159, 222, 62, 238, 212, 138, 62, 131, 81, 27, 63, 194, 92, 130, 63, 2, 229, 117, 63, 192, 148, 74, 62, 255, 133, 237, 62, 12, 149, 149, 189, 54, 203, 253, 189, 132, 236, 88, 191, 217, 49, 192, 190, 33, 235, 30, 191, 82, 96, 225, 189, 21, 14, 224, 190, 128, 87, 66, 190, 42, 227, 112, 190, 203, 205, 143, 189, 31, 169, 39, 191, 186, 80, 90, 63, 210, 127, 73, 62, 227, 117, 136, 189, 34, 3, 73, 191, 143, 14, 75, 190, 241, 70, 197, 62, 212, 96, 26, 189, 110, 97, 162, 62, 56, 107, 96, 189, 120, 229, 160, 62, 4, 217, 183, 188, 20, 229, 19, 190, 113, 36, 63, 62, 215, 236, 75, 62, 184, 208, 8, 189, 11, 131, 229, 189, 52, 204, 29, 62, 34, 205, 133, 62, 183, 96, 131, 62, 49, 53, 202, 190, 118, 152, 229, 60, 158, 168, 70, 190, 64, 133, 232, 189, 76, 166, 40, 62, 223, 236, 38, 62, 99, 164, 198, 60, 243, 97, 226, 187, 146, 44, 141, 61, 105, 67, 130, 190, 255, 203, 68, 190, 115, 32, 142, 188, 213, 173, 235, 61, 116, 90, 96, 61, 239, 21, 65, 190, 75, 151, 35, 62, 92, 237, 138, 61, 233, 105, 49, 188, 253, 252, 241, 60, 29, 164, 223, 188};
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
                alignas(float) const unsigned char memory[] = {48, 201, 231, 60, 42, 105, 82, 190};
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
    alignas(float) const unsigned char memory[] = {228, 213, 0, 191, 63, 14, 104, 62, 30, 43, 12, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {22, 197, 156, 191, 50, 115, 12, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0057/steps/000000000010000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
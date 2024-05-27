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
                alignas(float) const unsigned char memory[] = {121, 26, 162, 62, 97, 42, 165, 62, 207, 196, 173, 62, 247, 91, 76, 62, 218, 142, 110, 191, 80, 82, 193, 62, 54, 183, 49, 62, 81, 14, 165, 62, 227, 200, 166, 62, 17, 234, 133, 188, 188, 198, 164, 62, 245, 25, 166, 190, 249, 206, 16, 61, 90, 184, 2, 63, 213, 74, 0, 62, 207, 181, 25, 191, 72, 96, 211, 189, 175, 159, 129, 190, 104, 249, 74, 190, 0, 224, 150, 190, 5, 45, 68, 63, 30, 244, 35, 63, 67, 52, 89, 63, 116, 255, 35, 191, 25, 136, 195, 190, 139, 137, 148, 61, 253, 120, 74, 63, 29, 174, 238, 62, 216, 144, 49, 189, 247, 138, 153, 61, 56, 30, 39, 63, 102, 114, 252, 189, 196, 167, 165, 188, 231, 123, 25, 63, 99, 252, 230, 190, 112, 52, 237, 190, 94, 168, 172, 190, 196, 190, 186, 190, 173, 180, 48, 191, 125, 85, 24, 190, 249, 72, 83, 191, 30, 55, 120, 189, 8, 158, 68, 190, 46, 11, 156, 63, 130, 132, 77, 191, 194, 129, 55, 63, 90, 87, 79, 62, 224, 184, 222, 189, 200, 168, 7, 191, 34, 141, 168, 63, 205, 80, 108, 191, 240, 251, 29, 63, 181, 3, 128, 62, 247, 218, 133, 62, 214, 163, 16, 191, 114, 24, 189, 189, 131, 237, 216, 190, 151, 51, 165, 190, 53, 110, 104, 191, 2, 181, 155, 62, 15, 24, 1, 191, 174, 252, 78, 191, 44, 164, 104, 189, 238, 45, 43, 190, 145, 181, 54, 190, 254, 176, 124, 61, 186, 234, 113, 62, 249, 28, 141, 61, 146, 50, 27, 190, 96, 211, 175, 61, 107, 143, 146, 62, 10, 66, 141, 62, 164, 88, 9, 190, 12, 148, 158, 191, 225, 86, 48, 63, 201, 181, 213, 190, 172, 62, 153, 190, 118, 219, 235, 62, 172, 140, 239, 189, 12, 204, 138, 62, 56, 137, 1, 191, 135, 194, 151, 190, 227, 117, 88, 191, 179, 128, 130, 189, 40, 134, 63, 62, 84, 152, 178, 62, 148, 186, 134, 189, 166, 211, 190, 190, 107, 179, 12, 63, 17, 240, 56, 62, 133, 84, 126, 190, 118, 129, 15, 191, 129, 253, 229, 62, 234, 131, 21, 62, 20, 58, 92, 63, 61, 63, 133, 191};
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
                alignas(float) const unsigned char memory[] = {188, 156, 16, 191, 226, 190, 149, 62, 192, 235, 35, 190, 26, 81, 108, 61, 229, 123, 17, 63, 207, 137, 24, 63, 252, 2, 79, 62, 186, 232, 220, 62, 187, 149, 49, 62, 74, 105, 225, 189, 5, 29, 222, 62, 75, 182, 172, 188, 93, 36, 103, 190, 96, 61, 33, 63, 248, 202, 191, 189, 42, 26, 182, 62, 154, 80, 218, 190, 7, 81, 72, 190, 176, 241, 61, 62, 167, 137, 174, 190, 156, 169, 140, 62, 71, 170, 14, 191, 51, 61, 241, 62, 114, 210, 55, 190, 86, 18, 88, 61, 19, 55, 66, 63, 219, 155, 196, 190, 117, 139, 4, 63, 227, 63, 241, 190, 10, 1, 192, 62, 58, 197, 179, 190, 74, 9, 169, 62};
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
                alignas(float) const unsigned char memory[] = {119, 85, 73, 190, 175, 63, 163, 190, 234, 124, 34, 62, 2, 238, 47, 189, 223, 108, 56, 62, 80, 103, 96, 62, 106, 41, 200, 61, 86, 125, 198, 190, 217, 228, 149, 61, 76, 198, 178, 190, 96, 149, 149, 62, 35, 121, 41, 191, 74, 152, 134, 190, 25, 20, 164, 189, 15, 96, 194, 62, 182, 59, 156, 62, 7, 197, 38, 62, 88, 103, 213, 188, 201, 216, 90, 62, 114, 103, 143, 62, 27, 81, 1, 61, 166, 107, 13, 190, 252, 152, 143, 61, 197, 32, 33, 61, 58, 67, 87, 190, 187, 64, 62, 60, 105, 140, 15, 191, 178, 135, 105, 188, 208, 48, 164, 60, 244, 115, 47, 62, 51, 212, 59, 62, 57, 66, 66, 62, 163, 201, 150, 190, 127, 202, 129, 62, 40, 140, 37, 61, 42, 75, 15, 190, 66, 25, 123, 189, 46, 40, 30, 189, 25, 54, 236, 60, 126, 153, 95, 62, 69, 103, 31, 62, 224, 111, 193, 61, 11, 197, 77, 190, 41, 107, 206, 62, 44, 108, 23, 62, 48, 139, 160, 59, 6, 179, 39, 189, 7, 69, 71, 189, 202, 124, 94, 190, 188, 104, 124, 189, 151, 250, 137, 189, 254, 200, 10, 191, 41, 155, 101, 189, 223, 177, 247, 189, 220, 212, 205, 56, 86, 103, 195, 189, 254, 152, 173, 61, 58, 31, 164, 61, 245, 163, 152, 62, 95, 187, 179, 61, 105, 253, 16, 61, 218, 234, 237, 188, 168, 33, 188, 190, 155, 205, 30, 189, 55, 109, 32, 62, 116, 171, 120, 62, 209, 229, 113, 189, 64, 136, 56, 188, 210, 199, 246, 190, 189, 162, 241, 189, 35, 73, 144, 190, 185, 250, 189, 60, 193, 197, 206, 61, 198, 224, 80, 190, 209, 148, 39, 191, 254, 11, 209, 61, 40, 37, 255, 61, 150, 188, 83, 62, 248, 114, 16, 62, 34, 175, 234, 189, 169, 239, 105, 62, 71, 204, 153, 188, 70, 146, 84, 62, 186, 127, 171, 190, 59, 12, 124, 62, 230, 78, 85, 61, 200, 53, 1, 190, 104, 153, 112, 60, 238, 99, 166, 61, 133, 51, 154, 190, 216, 226, 191, 61, 56, 213, 205, 189, 188, 5, 93, 189, 4, 181, 49, 191, 217, 246, 41, 61, 144, 67, 37, 62, 113, 92, 94, 189, 25, 20, 175, 62, 29, 170, 100, 190, 108, 236, 29, 190, 178, 160, 45, 61, 245, 25, 41, 61, 179, 10, 194, 61, 143, 152, 224, 190, 146, 187, 23, 62, 36, 136, 78, 62, 97, 23, 247, 190, 122, 70, 92, 60, 253, 38, 1, 191, 223, 66, 5, 62, 161, 21, 128, 191, 249, 102, 1, 191, 222, 231, 180, 191, 41, 151, 107, 188, 168, 132, 59, 62, 64, 231, 139, 190, 123, 65, 45, 62, 9, 116, 18, 189, 14, 219, 41, 190, 16, 254, 46, 190, 197, 209, 193, 62, 144, 136, 123, 62, 249, 110, 250, 189, 9, 122, 181, 62, 161, 114, 164, 61, 189, 95, 133, 61, 115, 76, 139, 188, 129, 113, 135, 191, 187, 188, 7, 60, 100, 71, 111, 189, 69, 151, 8, 188, 58, 173, 225, 189, 7, 193, 230, 189, 153, 241, 120, 189, 102, 73, 139, 189, 247, 161, 199, 188, 161, 127, 34, 190, 76, 98, 213, 61, 162, 195, 167, 187, 125, 129, 9, 190, 201, 123, 39, 190, 183, 141, 52, 189, 74, 8, 42, 190, 236, 233, 34, 190, 106, 193, 219, 59, 146, 85, 141, 189, 171, 108, 18, 62, 155, 129, 51, 62, 142, 242, 186, 61, 152, 4, 255, 61, 101, 106, 8, 62, 44, 219, 86, 189, 41, 167, 24, 62, 142, 111, 1, 190, 226, 85, 126, 61, 60, 56, 168, 189, 219, 35, 254, 61, 78, 118, 173, 184, 214, 234, 196, 60, 2, 45, 223, 189, 97, 174, 56, 190, 214, 121, 56, 62, 53, 172, 21, 62, 100, 13, 204, 60, 252, 10, 44, 62, 97, 36, 176, 189, 186, 82, 2, 62, 2, 217, 81, 62, 87, 51, 90, 62, 193, 217, 151, 190, 23, 41, 207, 62, 112, 209, 139, 189, 11, 30, 134, 190, 27, 177, 174, 190, 39, 23, 52, 62, 236, 56, 200, 62, 106, 114, 21, 190, 4, 178, 40, 190, 226, 135, 194, 190, 191, 21, 18, 61, 142, 31, 51, 191, 144, 255, 27, 190, 138, 73, 8, 62, 0, 179, 87, 62, 152, 217, 119, 61, 246, 138, 11, 62, 200, 233, 8, 62, 84, 205, 196, 190, 110, 158, 242, 188, 1, 41, 130, 188, 112, 10, 226, 189, 28, 40, 43, 189, 163, 240, 152, 190, 155, 81, 178, 62, 55, 136, 32, 189, 148, 45, 95, 190, 67, 217, 61, 62, 242, 209, 187, 60, 232, 67, 118, 62, 118, 2, 188, 62, 74, 122, 89, 62, 25, 208, 167, 62, 223, 93, 64, 189, 252, 185, 71, 62, 70, 120, 215, 190, 15, 111, 2, 189, 141, 86, 103, 191, 87, 25, 29, 62, 156, 56, 166, 191, 148, 45, 60, 190, 113, 126, 190, 187, 26, 112, 140, 190, 75, 159, 231, 62, 103, 113, 19, 190, 236, 151, 70, 62, 64, 176, 133, 189, 72, 221, 116, 61, 27, 93, 101, 62, 109, 228, 99, 190, 217, 235, 229, 60, 65, 185, 19, 190, 200, 45, 12, 62, 225, 236, 220, 190, 88, 184, 56, 191, 246, 220, 170, 60, 126, 104, 52, 190, 209, 73, 57, 189, 212, 52, 24, 190, 168, 0, 4, 61, 41, 195, 194, 186, 26, 116, 3, 62, 90, 128, 51, 62, 60, 69, 52, 60, 59, 62, 134, 60, 71, 161, 25, 185, 89, 207, 76, 60, 109, 248, 177, 61, 73, 63, 236, 187, 12, 161, 195, 61, 120, 144, 66, 189, 19, 18, 219, 188, 161, 143, 177, 189, 9, 250, 44, 190, 85, 29, 68, 189, 41, 226, 194, 188, 150, 6, 32, 61, 188, 146, 164, 61, 79, 254, 75, 59, 181, 163, 51, 188, 213, 170, 155, 189, 35, 10, 209, 189, 88, 206, 82, 189, 104, 98, 26, 62, 16, 94, 245, 59, 140, 3, 101, 188, 239, 15, 43, 190, 166, 23, 141, 188, 182, 161, 194, 189, 27, 121, 77, 62, 5, 249, 243, 189, 199, 187, 38, 189, 158, 237, 87, 190, 40, 144, 116, 61, 43, 98, 38, 61, 133, 192, 141, 62, 158, 99, 174, 190, 187, 54, 167, 61, 43, 28, 179, 190, 165, 92, 222, 59, 173, 243, 232, 189, 58, 107, 179, 61, 219, 248, 72, 62, 142, 131, 204, 60, 70, 229, 194, 61, 78, 117, 31, 60, 193, 89, 166, 62, 127, 218, 236, 188, 6, 127, 48, 62, 238, 73, 252, 59, 62, 238, 62, 62, 240, 106, 45, 62, 121, 117, 132, 61, 33, 248, 206, 61, 0, 7, 90, 190, 60, 13, 60, 190, 155, 115, 207, 61, 144, 108, 141, 62, 41, 33, 112, 61, 129, 210, 241, 189, 223, 196, 209, 62, 67, 102, 108, 60, 160, 225, 195, 190, 12, 244, 124, 189, 5, 155, 66, 190, 126, 230, 141, 62, 110, 176, 104, 60, 162, 64, 200, 61, 250, 121, 152, 190, 51, 213, 154, 189, 18, 223, 233, 62, 238, 12, 17, 189, 12, 121, 18, 62, 84, 243, 47, 190, 114, 130, 138, 190, 106, 67, 9, 190, 245, 34, 96, 189, 114, 186, 77, 190, 173, 74, 219, 61, 85, 39, 150, 189, 188, 169, 188, 61, 164, 83, 8, 190, 199, 120, 133, 189, 222, 213, 152, 62, 103, 86, 5, 61, 187, 75, 100, 61, 84, 30, 62, 62, 218, 223, 21, 62, 6, 108, 114, 189, 139, 183, 49, 60, 120, 85, 123, 190, 118, 72, 201, 188, 172, 82, 232, 188, 208, 230, 249, 189, 128, 125, 151, 189, 173, 234, 5, 62, 178, 167, 43, 188, 126, 206, 158, 189, 236, 185, 96, 60, 200, 109, 51, 61, 251, 166, 224, 61, 41, 75, 38, 190, 34, 190, 98, 60, 99, 65, 102, 60, 112, 146, 130, 189, 30, 3, 131, 61, 241, 198, 18, 190, 255, 215, 212, 61, 212, 213, 33, 60, 183, 66, 69, 190, 84, 62, 0, 190, 7, 94, 79, 190, 111, 157, 156, 189, 22, 223, 5, 190, 43, 125, 58, 62, 151, 225, 41, 189, 106, 142, 18, 190, 43, 124, 128, 188, 204, 151, 193, 187, 84, 141, 188, 61, 5, 173, 37, 190, 9, 127, 49, 60, 93, 62, 42, 189, 248, 233, 193, 190, 83, 151, 87, 62, 106, 242, 126, 61, 90, 42, 26, 190, 33, 178, 89, 189, 108, 244, 59, 62, 245, 187, 24, 62, 141, 66, 178, 60, 230, 14, 51, 60, 219, 163, 253, 60, 44, 19, 158, 190, 170, 181, 206, 61, 23, 255, 89, 61, 146, 244, 104, 190, 60, 167, 188, 188, 50, 33, 208, 189, 171, 3, 175, 190, 43, 181, 48, 190, 139, 16, 79, 190, 111, 93, 120, 62, 231, 8, 22, 190, 127, 83, 240, 61, 102, 22, 8, 190, 86, 209, 163, 189, 133, 115, 94, 62, 48, 83, 236, 60, 240, 60, 178, 189, 196, 183, 146, 189, 57, 130, 253, 60, 96, 102, 0, 62, 161, 71, 113, 62, 118, 13, 59, 190, 134, 33, 180, 190, 216, 251, 103, 190, 98, 150, 35, 190, 74, 13, 8, 62, 120, 146, 56, 62, 15, 196, 236, 61, 211, 132, 166, 186, 166, 38, 45, 62, 33, 8, 91, 62, 169, 247, 10, 189, 75, 162, 41, 190, 34, 202, 112, 60, 201, 131, 83, 190, 59, 140, 162, 190, 211, 163, 85, 61, 48, 174, 35, 61, 190, 151, 129, 190, 246, 11, 130, 190, 21, 129, 205, 188, 198, 133, 145, 189, 200, 96, 143, 190, 122, 217, 184, 61, 44, 155, 207, 61, 178, 182, 183, 60, 172, 124, 109, 61, 133, 133, 204, 189, 95, 3, 171, 188, 21, 36, 225, 190, 202, 248, 56, 61, 40, 124, 6, 62, 134, 49, 252, 189, 141, 39, 55, 190, 215, 163, 13, 63, 135, 175, 138, 190, 227, 250, 137, 62, 185, 19, 45, 190, 24, 197, 34, 61, 47, 87, 33, 190, 197, 31, 240, 189, 8, 66, 54, 189, 39, 49, 72, 62, 252, 183, 150, 190, 160, 168, 135, 61, 9, 200, 151, 189, 132, 227, 226, 189, 168, 85, 74, 190, 25, 27, 0, 61, 121, 133, 150, 61, 85, 76, 209, 189, 225, 66, 176, 62, 103, 125, 32, 189, 153, 191, 70, 190, 26, 52, 235, 189, 25, 20, 115, 189, 75, 132, 18, 61, 237, 26, 83, 62, 123, 122, 138, 59, 254, 91, 60, 61, 17, 216, 129, 188, 199, 107, 161, 189, 174, 175, 128, 189, 96, 91, 239, 60, 21, 46, 164, 60, 95, 151, 229, 188, 165, 122, 79, 190, 88, 36, 211, 190, 24, 76, 0, 189, 110, 148, 168, 61, 214, 191, 84, 62, 211, 195, 6, 62, 147, 42, 166, 190, 114, 176, 147, 190, 236, 169, 69, 190, 111, 199, 63, 190, 178, 126, 224, 62, 128, 207, 224, 190, 108, 136, 158, 188, 253, 250, 8, 190, 132, 179, 174, 62, 130, 112, 87, 62, 142, 245, 205, 62, 156, 62, 213, 61, 107, 188, 118, 62, 201, 0, 54, 62, 142, 188, 4, 190, 49, 59, 130, 190, 173, 154, 234, 61, 140, 251, 37, 62, 132, 238, 162, 190, 75, 82, 19, 188, 249, 231, 175, 190, 67, 25, 250, 189, 158, 234, 106, 189, 72, 61, 21, 62, 211, 51, 150, 186, 51, 177, 141, 62, 175, 228, 164, 190, 19, 94, 15, 190, 236, 66, 133, 189, 241, 225, 149, 62, 188, 232, 98, 61, 231, 120, 129, 189, 129, 139, 181, 189, 194, 149, 189, 62, 19, 228, 11, 62, 47, 62, 24, 189, 24, 147, 120, 190, 241, 127, 142, 61, 11, 251, 25, 62, 85, 133, 140, 190, 72, 254, 197, 62, 190, 238, 32, 58, 23, 42, 195, 62, 182, 85, 90, 61, 62, 250, 7, 61, 39, 9, 175, 188, 155, 171, 146, 190, 75, 6, 64, 61, 17, 33, 176, 61, 160, 172, 59, 61, 251, 17, 109, 190, 152, 162, 138, 189, 107, 254, 211, 189, 173, 153, 80, 190, 80, 36, 174, 61, 56, 236, 198, 188, 151, 148, 17, 189, 155, 175, 82, 62, 25, 49, 20, 58, 12, 162, 75, 62, 60, 47, 116, 189, 187, 44, 233, 189, 122, 100, 156, 190, 237, 173, 54, 190, 170, 94, 214, 61, 87, 239, 21, 62, 72, 99, 26, 61, 158, 78, 74, 62, 206, 223, 129, 61, 49, 128, 179, 62, 171, 204, 191, 61, 205, 211, 183, 61, 168, 68, 143, 60, 76, 164, 249, 59, 170, 185, 63, 190, 174, 4, 15, 190, 234, 205, 115, 188, 170, 248, 191, 60, 236, 112, 7, 190, 145, 113, 208, 61, 181, 1, 90, 190, 164, 192, 144, 188, 83, 40, 240, 188, 246, 253, 170, 190, 51, 52, 138, 62, 59, 159, 29, 62, 124, 148, 140, 61, 176, 67, 33, 190, 87, 194, 11, 190, 12, 163, 84, 189, 58, 51, 113, 190, 180, 123, 194, 62, 202, 52, 184, 189, 208, 169, 0, 189, 129, 212, 192, 189, 233, 126, 77, 61, 233, 110, 44, 62, 232, 85, 162, 62, 251, 132, 203, 61, 195, 105, 109, 62, 35, 83, 188, 62, 228, 20, 184, 62, 20, 82, 70, 188, 210, 26, 216, 188, 206, 228, 2, 190, 218, 162, 43, 62, 120, 95, 138, 190, 80, 44, 211, 188, 110, 17, 36, 190, 16, 139, 7, 191, 104, 173, 4, 61, 74, 68, 41, 61, 160, 93, 190, 60, 101, 9, 124, 189, 217, 229, 188, 61, 114, 197, 255, 189, 158, 116, 136, 62, 252, 190, 89, 62, 85, 1, 45, 190, 255, 93, 132, 60, 148, 101, 51, 190, 131, 104, 248, 60, 245, 40, 178, 189, 237, 35, 34, 60, 122, 244, 41, 62, 234, 18, 211, 189, 105, 156, 206, 61, 254, 88, 37, 190, 181, 97, 191, 61, 135, 171, 144, 61, 124, 237, 202, 61, 110, 79, 137, 190, 89, 157, 128, 62, 166, 196, 143, 190, 97, 184, 56, 189, 160, 161, 158, 190, 67, 231, 156, 61, 144, 100, 36, 62, 191, 52, 151, 190, 232, 12, 245, 188, 103, 99, 59, 190, 64, 210, 20, 62, 227, 1, 64, 191, 48, 35, 216, 188, 190, 201, 77, 60, 184, 234, 27, 62, 49, 109, 65, 189, 211, 21, 66, 62, 77, 161, 5, 61, 232, 72, 2, 191, 87, 63, 105, 61, 32, 213, 148, 61, 139, 250, 188, 61, 167, 103, 44, 189, 115, 31, 88, 62, 154, 208, 8, 62, 90, 25, 210, 60, 20, 148, 58, 190, 102, 117, 70, 190, 75, 7, 187, 189, 169, 244, 131, 61, 85, 95, 185, 62, 54, 246, 9, 62, 168, 16, 254, 187, 185, 192, 159, 190, 155, 162, 198, 62, 117, 10, 255, 61, 165, 25, 185, 189, 241, 233, 238, 189, 170, 83, 86, 190, 254, 169, 35, 190, 245, 106, 189, 60, 28, 90, 170, 61, 116, 63, 153, 190, 30, 52, 117, 62, 52, 72, 16, 62, 225, 14, 218, 188, 96, 251, 192, 61, 102, 24, 156, 62, 115, 36, 150, 61, 114, 124, 1, 63, 62, 5, 106, 62, 94, 181, 69, 189, 192, 188, 250, 189, 192, 3, 108, 190, 87, 37, 55, 190, 78, 254, 53, 190, 130, 53, 158, 189, 17, 140, 222, 189, 31, 235, 249, 61, 243, 53, 103, 189, 173, 169, 3, 62, 22, 143, 5, 190, 47, 215, 87, 190, 170, 86, 222, 189, 90, 160, 231, 188, 189, 155, 143, 62, 73, 146, 244, 188, 244, 103, 120, 62, 236, 179, 82, 62, 62, 53, 110, 62, 86, 17, 10, 61, 41, 148, 246, 61, 13, 213, 18, 190, 213, 84, 131, 61, 8, 174, 72, 62, 166, 37, 110, 62, 99, 117, 4, 190, 251, 28, 101, 62, 233, 209, 147, 189, 148, 38, 144, 190, 244, 206, 162, 61, 183, 192, 230, 189, 222, 220, 85, 62, 191, 179, 12, 190, 152, 48, 87, 62, 7, 240, 123, 62, 138, 208, 84, 62, 94, 161, 92, 189, 157, 112, 105, 190, 213, 158, 216, 61, 192, 48, 208, 61, 84, 106, 137, 189, 234, 120, 39, 190, 208, 98, 227, 60, 9, 4, 36, 188, 138, 102, 172, 61, 88, 126, 136, 60, 138, 157, 68, 189, 130, 217, 24, 190, 222, 0, 241, 61, 102, 247, 120, 58, 40, 102, 36, 189, 193, 10, 203, 189, 43, 52, 37, 61, 36, 7, 235, 189, 144, 150, 36, 190, 204, 92, 37, 190, 233, 73, 10, 61, 90, 237, 70, 190, 225, 133, 102, 189, 172, 36, 6, 62, 52, 112, 18, 190, 92, 183, 164, 189, 160, 94, 16, 190, 224, 139, 181, 60, 86, 101, 10, 62, 226, 46, 232, 189, 128, 118, 142, 60, 128, 202, 18, 190, 7, 72, 123, 190, 208, 5, 24, 62, 115, 123, 123, 189, 185, 246, 4, 190, 77, 247, 85, 61, 186, 229, 73, 61, 6, 150, 241, 59, 116, 12, 35, 189, 180, 5, 19, 62, 26, 23, 100, 190, 33, 234, 193, 62, 241, 150, 244, 61, 217, 125, 235, 59, 95, 107, 92, 62, 252, 169, 96, 189, 52, 2, 188, 62, 22, 157, 76, 190, 36, 23, 11, 190, 204, 210, 19, 190, 183, 69, 140, 189, 254, 228, 50, 61, 217, 92, 179, 189, 63, 210, 4, 189, 163, 2, 40, 190, 182, 48, 124, 61, 90, 241, 88, 61, 245, 184, 140, 189, 7, 20, 13, 62, 54, 42, 39, 62, 122, 156, 214, 61, 23, 145, 93, 189, 65, 225, 164, 61, 195, 122, 159, 61, 88, 118, 14, 62, 18, 43, 98, 57, 89, 120, 121, 190, 58, 178, 127, 61, 131, 118, 66, 190, 139, 43, 44, 62, 244, 240, 252, 189, 255, 77, 118, 188, 233, 75, 142, 190, 244, 99, 168, 60, 104, 98, 11, 189, 249, 145, 113, 190, 47, 51, 202, 190, 171, 42, 139, 189, 23, 43, 218, 61, 145, 59, 31, 190, 83, 97, 206, 61, 200, 24, 197, 190, 11, 128, 183, 186, 240, 90, 219, 190, 117, 70, 97, 60, 92, 245, 135, 189, 94, 111, 53, 62, 246, 76, 178, 61, 254, 64, 190, 61, 229, 118, 245, 189, 189, 186, 152, 190, 135, 34, 236, 186, 170, 105, 66, 62, 187, 11, 162, 61, 7, 92, 65, 190, 64, 231, 136, 61, 5, 187, 191, 189, 202, 175, 163, 188, 215, 202, 43, 61, 98, 117, 7, 61, 139, 222, 160, 61, 147, 228, 181, 189, 68, 77, 172, 60, 157, 65, 106, 189, 137, 5, 248, 61, 223, 231, 220, 187, 31, 206, 17, 188, 80, 15, 246, 189, 213, 33, 61, 189, 120, 109, 156, 59, 224, 30, 249, 189, 90, 28, 55, 190, 97, 11, 85, 189, 200, 3, 19, 62, 177, 87, 181, 60, 52, 251, 14, 62, 45, 148, 153, 61, 104, 242, 157, 189, 67, 27, 183, 189, 173, 190, 40, 61, 165, 9, 17, 190, 243, 215, 28, 62, 37, 148, 90, 60, 106, 123, 78, 187, 47, 225, 141, 61, 6, 254, 43, 190, 228, 84, 39, 190, 246, 58, 206, 189, 17, 101, 10, 62, 151, 133, 129, 61, 15, 36, 159, 61, 16, 63, 192, 190, 155, 196, 220, 61, 172, 146, 132, 61, 244, 120, 152, 189, 51, 37, 24, 61, 252, 227, 183, 61, 172, 179, 255, 189, 195, 196, 135, 61, 129, 181, 69, 62, 93, 185, 14, 189, 27, 12, 145, 188, 136, 52, 7, 190, 62, 161, 13, 188, 87, 21, 101, 190, 123, 127, 20, 61, 163, 246, 21, 191, 170, 171, 136, 61, 87, 185, 91, 190, 201, 23, 179, 61, 13, 107, 226, 189, 126, 122, 70, 62, 170, 73, 137, 190, 214, 243, 231, 61, 202, 175, 45, 62, 43, 125, 219, 58, 137, 128, 141, 190, 255, 243, 147, 190, 98, 1, 162, 59, 154, 190, 84, 60, 29, 171, 193, 61, 240, 127, 0, 62, 159, 219, 6, 62, 54, 145, 39, 190, 228, 161, 106, 187, 12, 84, 140, 189, 44, 255, 177, 189, 202, 25, 20, 62, 75, 198, 226, 61, 6, 232, 142, 189, 193, 144, 249, 188, 210, 124, 147, 189, 31, 153, 25, 190, 34, 241, 45, 62, 123, 118, 161, 188, 15, 208, 136, 60, 219, 114, 1, 189, 222, 233, 0, 190, 153, 102, 23, 62, 23, 191, 48, 190, 135, 21, 73, 189, 213, 69, 186, 61, 176, 102, 223, 189, 14, 221, 52, 190, 192, 115, 192, 189, 10, 140, 51, 189, 13, 186, 153, 61, 26, 221, 177, 61, 42, 11, 52, 190, 59, 113, 147, 189, 43, 60, 7, 190, 192, 248, 11, 190, 132, 125, 214, 189, 183, 57, 222, 61, 128, 229, 4, 190, 5, 93, 52, 62, 161, 23, 182, 189, 243, 194, 1, 62, 205, 229, 71, 190, 152, 84, 106, 62, 43, 226, 109, 190, 68, 61, 47, 62, 148, 17, 171, 189, 218, 174, 53, 190, 156, 200, 13, 191, 223, 240, 93, 189, 56, 93, 75, 62, 42, 137, 82, 190, 250, 234, 214, 189, 192, 91, 19, 190, 86, 64, 170, 188, 170, 9, 73, 191, 82, 238, 251, 189, 253, 127, 222, 189, 65, 55, 12, 62, 123, 229, 180, 188, 218, 17, 31, 188, 231, 135, 143, 60, 4, 60, 239, 190, 115, 220, 195, 61, 48, 181, 115, 62, 252, 26, 183, 61, 57, 184, 63, 190, 87, 166, 9, 62, 127, 107, 135, 191, 8, 19, 61, 62, 70, 176, 34, 62, 189, 206, 188, 61, 186, 160, 132, 62, 101, 121, 246, 190, 129, 19, 205, 190, 14, 8, 179, 190, 183, 29, 51, 188, 20, 134, 35, 63, 79, 103, 132, 190, 215, 251, 203, 61, 104, 160, 75, 189, 131, 202, 228, 62, 131, 40, 0, 63, 47, 184, 190, 62, 101, 160, 178, 62, 151, 207, 154, 62, 50, 42, 10, 189, 62, 114, 15, 61, 191, 142, 185, 189, 165, 55, 144, 61, 253, 164, 6, 62, 161, 188, 79, 191, 42, 55, 177, 189, 220, 87, 44, 190, 114, 241, 61, 60, 81, 233, 46, 190, 231, 47, 29, 62, 140, 185, 6, 190, 179, 184, 12, 62, 208, 213, 13, 190, 152, 18, 193, 62, 77, 88, 110, 190, 26, 83, 83, 190, 30, 255, 120, 188, 67, 55, 17, 190, 203, 178, 141, 62, 86, 93, 118, 62, 105, 161, 251, 189, 130, 12, 121, 61, 229, 89, 59, 62, 116, 179, 215, 62, 221, 171, 147, 189, 190, 44, 23, 62, 108, 20, 192, 58, 142, 160, 142, 190, 38, 173, 131, 188, 244, 122, 245, 189, 199, 54, 42, 189, 238, 247, 69, 61, 62, 72, 189, 61, 179, 34, 253, 61, 206, 17, 70, 61, 105, 52, 138, 190, 56, 20, 225, 61, 247, 207, 60, 190, 106, 81, 255, 61, 54, 248, 249, 61, 168, 68, 138, 189, 41, 223, 4, 189, 233, 38, 123, 190, 73, 33, 91, 190, 86, 249, 140, 190, 224, 242, 167, 62, 236, 67, 179, 190, 13, 52, 246, 189, 134, 184, 23, 190, 96, 68, 59, 62, 11, 116, 60, 62, 59, 39, 242, 62, 128, 61, 162, 61, 198, 99, 228, 61, 159, 176, 50, 189, 82, 255, 180, 62, 191, 243, 88, 62, 86, 213, 52, 62, 68, 118, 135, 190, 117, 254, 130, 62, 89, 159, 173, 190, 58, 163, 175, 61, 109, 190, 148, 189, 183, 221, 29, 191, 149, 29, 41, 62, 93, 78, 119, 61, 200, 113, 5, 62, 172, 57, 79, 190, 222, 239, 193, 62, 111, 77, 254, 60, 217, 40, 70, 62, 156, 99, 1, 189, 174, 223, 83, 189, 163, 184, 4, 190, 87, 125, 184, 190, 110, 171, 19, 61, 23, 48, 226, 61, 164, 130, 72, 62, 222, 171, 49, 190, 249, 78, 123, 189, 172, 111, 150, 190, 40, 210, 138, 61, 13, 185, 93, 190, 49, 229, 224, 61, 165, 134, 228, 188, 43, 186, 178, 188, 201, 70, 43, 191, 204, 98, 158, 62, 253, 178, 9, 189, 119, 180, 135, 189, 118, 61, 17, 62, 169, 102, 71, 190, 128, 102, 160, 62, 206, 22, 142, 60, 94, 61, 128, 62, 61, 165, 15, 60, 224, 135, 168, 61, 189, 200, 45, 190, 19, 150, 13, 62, 4, 195, 34, 190, 222, 91, 127, 60, 103, 228, 192, 190, 243, 96, 143, 62, 248, 94, 244, 60, 106, 250, 30, 190, 62, 239, 171, 190, 88, 178, 114, 60, 22, 93, 189, 61};
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
                alignas(float) const unsigned char memory[] = {233, 151, 182, 188, 191, 253, 218, 61, 151, 162, 229, 188, 173, 168, 62, 62, 131, 239, 86, 186, 4, 71, 126, 186, 251, 29, 104, 62, 8, 215, 42, 190, 248, 28, 8, 190, 90, 83, 57, 190, 106, 105, 195, 61, 114, 87, 185, 189, 104, 237, 222, 61, 99, 242, 204, 189, 108, 24, 146, 188, 244, 166, 29, 61, 175, 224, 157, 189, 100, 79, 18, 62, 197, 41, 186, 188, 113, 38, 149, 61, 216, 182, 15, 62, 230, 110, 174, 61, 147, 112, 32, 62, 171, 132, 23, 62, 45, 216, 203, 189, 123, 239, 12, 190, 99, 144, 176, 58, 48, 206, 101, 60, 127, 93, 137, 61, 200, 39, 88, 190, 194, 165, 224, 189, 105, 140, 135, 61};
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
                alignas(float) const unsigned char memory[] = {240, 115, 213, 190, 153, 229, 22, 62, 119, 34, 180, 62, 188, 220, 81, 63, 195, 172, 161, 61, 204, 214, 129, 190, 55, 89, 1, 63, 68, 19, 148, 188, 138, 170, 51, 190, 118, 51, 15, 191, 104, 102, 4, 190, 107, 52, 136, 190, 150, 111, 8, 190, 179, 154, 150, 190, 139, 9, 13, 191, 137, 227, 206, 62, 145, 187, 205, 190, 121, 55, 53, 62, 43, 233, 124, 190, 125, 169, 160, 62, 246, 191, 133, 190, 143, 167, 42, 62, 172, 133, 169, 188, 232, 123, 141, 190, 73, 200, 170, 188, 63, 150, 248, 61, 56, 206, 4, 190, 70, 151, 140, 190, 56, 181, 6, 191, 227, 57, 207, 190, 200, 235, 249, 62, 64, 252, 162, 62, 144, 194, 185, 189, 179, 250, 166, 189, 153, 173, 193, 189, 230, 64, 237, 59, 68, 217, 14, 190, 76, 206, 181, 190, 11, 163, 253, 189, 78, 169, 131, 59, 113, 181, 135, 187, 129, 169, 43, 62, 60, 239, 197, 189, 142, 228, 140, 189, 53, 201, 191, 190, 86, 51, 155, 62, 159, 230, 190, 189, 188, 230, 12, 62, 26, 105, 0, 62, 96, 77, 126, 190, 106, 132, 22, 190, 154, 4, 55, 61, 141, 233, 47, 190, 228, 83, 236, 61, 157, 89, 114, 190, 217, 43, 145, 189, 182, 11, 158, 189, 233, 106, 102, 190, 66, 97, 20, 190, 71, 215, 74, 190, 153, 192, 12, 189, 123, 166, 130, 189, 176, 60, 186, 189, 66, 53, 251, 189};
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
                alignas(float) const unsigned char memory[] = {87, 140, 202, 188, 182, 249, 16, 61};
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
    alignas(float) const unsigned char memory[] = {181, 153, 190, 62, 189, 221, 72, 191, 32, 171, 79, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {169, 216, 102, 63, 64, 34, 149, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0066/steps/000000000004000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}
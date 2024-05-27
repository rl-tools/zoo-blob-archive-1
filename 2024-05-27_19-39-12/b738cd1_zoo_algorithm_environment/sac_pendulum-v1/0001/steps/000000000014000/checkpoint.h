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
                alignas(float) const unsigned char memory[] = {115, 151, 206, 60, 213, 88, 101, 190, 192, 102, 238, 62, 193, 16, 147, 62, 239, 228, 129, 191, 139, 17, 214, 190, 4, 43, 232, 62, 113, 219, 152, 189, 234, 4, 34, 191, 69, 208, 56, 191, 60, 46, 51, 191, 30, 128, 128, 190, 89, 30, 246, 190, 218, 175, 137, 62, 47, 20, 17, 191, 180, 92, 252, 190, 185, 84, 143, 190, 220, 55, 142, 62, 34, 23, 26, 190, 134, 118, 171, 191, 34, 77, 139, 190, 158, 78, 58, 190, 35, 189, 94, 63, 20, 61, 17, 190, 13, 173, 33, 190, 172, 21, 138, 63, 176, 92, 103, 62, 139, 119, 29, 62, 234, 62, 150, 63, 179, 197, 203, 62, 64, 228, 9, 63, 215, 128, 7, 191, 4, 134, 99, 190, 157, 106, 226, 190, 231, 156, 191, 191, 133, 209, 55, 61, 159, 40, 7, 63, 192, 2, 75, 63, 29, 9, 15, 63, 2, 110, 110, 189, 244, 104, 31, 191, 127, 242, 204, 190, 19, 85, 181, 62, 41, 165, 58, 62, 174, 114, 3, 191, 106, 219, 143, 191, 211, 12, 6, 63, 182, 53, 166, 188, 243, 29, 80, 63, 226, 144, 128, 191, 182, 140, 64, 190, 57, 220, 188, 190, 29, 94, 8, 191, 165, 233, 230, 62, 109, 32, 92, 189, 209, 81, 152, 191, 154, 214, 172, 62, 67, 237, 85, 191, 164, 126, 182, 62, 50, 82, 82, 62, 94, 208, 81, 189, 45, 163, 136, 191, 224, 221, 132, 190, 101, 187, 87, 190, 2, 29, 206, 62, 134, 135, 79, 190, 63, 18, 132, 62, 207, 40, 41, 63, 216, 13, 57, 61, 201, 87, 14, 191, 70, 152, 2, 190, 162, 183, 197, 62, 100, 112, 51, 63, 126, 18, 126, 63, 214, 194, 154, 62, 141, 42, 251, 62, 59, 121, 136, 190, 234, 242, 194, 190, 16, 118, 130, 190, 237, 112, 229, 190, 171, 241, 49, 191, 69, 69, 94, 63, 155, 99, 146, 63, 85, 205, 177, 62, 96, 213, 14, 190, 61, 103, 70, 63, 132, 122, 192, 62, 150, 158, 67, 62, 14, 40, 65, 191, 70, 129, 162, 190, 90, 109, 228, 61, 27, 129, 116, 63, 70, 88, 25, 63, 204, 253, 179, 189, 149, 73, 210, 62, 42, 47, 126, 58};
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
                alignas(float) const unsigned char memory[] = {240, 56, 150, 191, 9, 208, 1, 191, 205, 1, 44, 190, 148, 7, 219, 62, 63, 103, 161, 190, 187, 171, 23, 63, 253, 227, 156, 190, 82, 201, 198, 62, 57, 42, 19, 190, 244, 237, 40, 190, 29, 67, 11, 62, 73, 207, 176, 190, 53, 255, 29, 190, 14, 141, 143, 190, 93, 0, 30, 63, 161, 74, 28, 62, 158, 148, 244, 62, 127, 129, 203, 62, 169, 9, 207, 62, 8, 225, 183, 62, 177, 116, 165, 62, 26, 222, 151, 62, 147, 242, 25, 63, 196, 50, 176, 62, 132, 215, 251, 60, 42, 25, 210, 190, 179, 126, 73, 190, 103, 178, 223, 190, 29, 165, 150, 190, 222, 186, 105, 190, 222, 84, 189, 190, 77, 175, 9, 191};
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
                alignas(float) const unsigned char memory[] = {224, 185, 120, 62, 185, 180, 172, 60, 4, 27, 151, 189, 124, 254, 157, 190, 149, 225, 75, 62, 194, 29, 181, 61, 220, 0, 13, 191, 171, 220, 165, 62, 90, 245, 82, 62, 180, 52, 183, 61, 247, 53, 89, 61, 160, 178, 45, 191, 210, 16, 161, 62, 60, 66, 112, 189, 9, 141, 214, 61, 42, 16, 116, 62, 74, 154, 92, 62, 139, 39, 35, 190, 76, 106, 148, 190, 95, 179, 40, 62, 194, 225, 253, 188, 121, 52, 146, 62, 109, 206, 199, 62, 70, 135, 91, 190, 248, 190, 58, 62, 222, 89, 130, 189, 240, 60, 184, 61, 118, 196, 212, 190, 116, 72, 170, 62, 231, 214, 220, 189, 161, 222, 157, 62, 123, 17, 200, 186, 212, 216, 196, 62, 89, 148, 239, 190, 74, 247, 131, 190, 31, 231, 13, 62, 199, 21, 109, 62, 11, 175, 226, 189, 15, 148, 92, 62, 10, 157, 143, 62, 174, 60, 225, 190, 150, 168, 160, 61, 154, 112, 64, 188, 245, 3, 209, 62, 25, 225, 96, 60, 6, 158, 8, 61, 126, 200, 30, 62, 238, 16, 112, 190, 64, 4, 186, 61, 9, 150, 37, 62, 186, 201, 225, 61, 143, 168, 113, 61, 138, 39, 95, 190, 252, 139, 41, 62, 129, 197, 127, 189, 202, 216, 144, 188, 113, 69, 79, 61, 244, 165, 102, 190, 175, 20, 140, 61, 208, 188, 26, 62, 1, 74, 12, 62, 237, 174, 5, 191, 177, 34, 71, 190, 185, 19, 59, 61, 139, 160, 211, 190, 65, 174, 155, 62, 184, 67, 160, 189, 100, 79, 65, 190, 26, 76, 163, 61, 61, 225, 31, 62, 230, 96, 38, 191, 142, 166, 101, 61, 127, 74, 6, 63, 54, 182, 255, 189, 3, 105, 211, 60, 174, 213, 232, 190, 209, 185, 150, 190, 232, 217, 60, 190, 212, 220, 98, 189, 60, 61, 157, 62, 118, 239, 58, 62, 38, 180, 98, 62, 166, 67, 218, 61, 172, 250, 101, 62, 119, 106, 25, 61, 155, 254, 6, 61, 144, 43, 34, 62, 54, 29, 156, 60, 175, 197, 79, 190, 225, 197, 25, 62, 255, 11, 70, 190, 138, 49, 130, 191, 187, 167, 230, 188, 20, 227, 132, 61, 190, 124, 67, 62, 246, 56, 99, 189, 185, 8, 233, 189, 6, 211, 165, 62, 32, 5, 11, 62, 60, 141, 16, 62, 92, 96, 244, 189, 191, 15, 59, 62, 5, 9, 16, 62, 68, 174, 118, 188, 21, 81, 18, 191, 214, 182, 196, 190, 14, 215, 78, 59, 35, 178, 162, 62, 221, 239, 106, 190, 41, 212, 95, 62, 129, 83, 15, 62, 152, 18, 5, 190, 91, 185, 48, 62, 208, 185, 114, 62, 96, 175, 15, 63, 31, 2, 27, 62, 109, 219, 212, 61, 39, 156, 25, 190, 98, 81, 244, 190, 87, 56, 198, 60, 243, 9, 157, 190, 220, 240, 3, 62, 199, 190, 10, 62, 125, 73, 208, 191, 235, 187, 11, 191, 120, 170, 223, 61, 230, 203, 27, 191, 102, 24, 131, 61, 70, 141, 56, 189, 44, 8, 176, 190, 77, 100, 29, 190, 1, 9, 16, 62, 248, 21, 88, 61, 134, 47, 145, 188, 115, 213, 40, 62, 195, 234, 211, 188, 82, 28, 31, 190, 5, 158, 7, 190, 226, 195, 134, 62, 29, 19, 44, 190, 215, 190, 133, 61, 212, 22, 152, 188, 135, 153, 57, 62, 117, 129, 194, 61, 52, 199, 171, 62, 243, 187, 16, 62, 240, 104, 161, 189, 66, 103, 32, 190, 151, 148, 76, 190, 110, 4, 2, 61, 149, 38, 182, 62, 228, 41, 145, 187, 133, 166, 53, 62, 85, 4, 110, 190, 243, 110, 84, 62, 19, 136, 152, 188, 174, 104, 132, 190, 110, 39, 33, 190, 206, 129, 151, 190, 34, 174, 43, 62, 224, 1, 62, 188, 30, 218, 214, 189, 70, 49, 177, 188, 110, 242, 166, 189, 41, 97, 28, 189, 209, 170, 1, 61, 140, 178, 27, 189, 254, 66, 8, 59, 214, 23, 105, 189, 193, 207, 168, 189, 229, 38, 12, 190, 72, 206, 219, 189, 127, 47, 133, 188, 185, 51, 71, 61, 132, 75, 17, 189, 201, 248, 191, 189, 120, 162, 17, 60, 164, 26, 34, 190, 189, 251, 13, 190, 251, 157, 234, 189, 12, 189, 102, 61, 62, 40, 8, 189, 19, 227, 154, 189, 157, 199, 127, 189, 197, 100, 42, 62, 182, 159, 159, 61, 177, 60, 55, 61, 167, 221, 11, 190, 42, 244, 254, 187, 125, 45, 63, 61, 131, 14, 166, 189, 34, 89, 32, 190, 182, 78, 179, 188, 217, 49, 29, 191, 85, 216, 197, 62, 244, 192, 144, 190, 241, 222, 38, 188, 10, 121, 237, 61, 118, 254, 175, 190, 233, 48, 213, 62, 203, 25, 143, 190, 28, 231, 124, 61, 53, 80, 131, 61, 185, 116, 13, 63, 111, 79, 62, 62, 113, 186, 198, 189, 157, 26, 126, 189, 97, 76, 253, 190, 145, 65, 30, 188, 111, 26, 108, 61, 216, 112, 13, 62, 17, 9, 82, 190, 199, 0, 62, 191, 25, 156, 11, 62, 195, 94, 97, 62, 244, 163, 166, 186, 186, 11, 189, 61, 177, 30, 230, 62, 173, 77, 103, 190, 32, 186, 5, 63, 23, 235, 208, 190, 186, 51, 142, 190, 52, 122, 11, 189, 82, 184, 22, 190, 67, 244, 139, 62, 112, 93, 133, 191, 59, 220, 92, 190, 68, 117, 179, 61, 185, 239, 58, 61, 122, 241, 71, 189, 178, 216, 229, 61, 46, 201, 199, 62, 207, 193, 148, 190, 116, 188, 165, 189, 110, 190, 186, 186, 250, 251, 2, 62, 85, 101, 136, 190, 230, 207, 34, 190, 55, 66, 57, 62, 88, 122, 144, 61, 125, 243, 148, 190, 200, 217, 169, 61, 49, 58, 241, 190, 74, 61, 10, 60, 216, 122, 163, 188, 242, 245, 65, 62, 102, 232, 12, 61, 182, 220, 0, 62, 37, 122, 212, 190, 210, 203, 12, 191, 224, 13, 224, 62, 170, 89, 128, 190, 115, 91, 173, 190, 137, 136, 24, 191, 72, 56, 154, 190, 30, 150, 20, 187, 137, 244, 96, 191, 118, 58, 136, 190, 158, 187, 27, 190, 167, 129, 114, 61, 126, 158, 51, 60, 130, 181, 158, 62, 20, 133, 113, 62, 44, 227, 166, 62, 185, 135, 143, 190, 250, 253, 67, 190, 31, 215, 7, 62, 169, 175, 150, 189, 211, 111, 80, 62, 96, 79, 21, 62, 192, 216, 154, 62, 46, 151, 109, 62, 71, 46, 183, 62, 168, 128, 47, 62, 158, 211, 18, 190, 9, 229, 154, 189, 164, 134, 138, 61, 173, 207, 70, 62, 184, 63, 5, 62, 203, 99, 72, 62, 8, 113, 116, 62, 2, 220, 149, 190, 101, 226, 19, 62, 211, 11, 142, 61, 36, 35, 158, 190, 76, 8, 20, 188, 95, 155, 81, 191, 90, 52, 13, 62, 113, 203, 10, 189, 139, 94, 114, 61, 218, 223, 40, 189, 66, 177, 0, 190, 41, 114, 61, 189, 212, 236, 51, 61, 29, 103, 11, 190, 182, 74, 35, 62, 199, 63, 36, 190, 156, 95, 70, 190, 195, 99, 129, 61, 193, 41, 43, 190, 21, 240, 134, 61, 221, 233, 44, 62, 53, 3, 63, 190, 203, 76, 48, 188, 57, 236, 146, 189, 186, 82, 55, 190, 52, 220, 64, 190, 127, 151, 190, 189, 13, 186, 33, 62, 100, 103, 96, 189, 209, 238, 101, 61, 73, 245, 27, 190, 25, 35, 253, 189, 10, 232, 179, 189, 57, 190, 14, 190, 82, 3, 6, 62, 157, 84, 128, 61, 104, 43, 127, 61, 68, 60, 23, 62, 240, 220, 208, 59, 107, 134, 159, 61, 26, 144, 70, 61, 195, 237, 93, 61, 64, 189, 82, 190, 101, 145, 172, 190, 13, 138, 90, 188, 99, 83, 99, 189, 151, 51, 250, 190, 217, 190, 6, 61, 2, 12, 164, 190, 245, 51, 149, 62, 131, 43, 115, 190, 104, 19, 57, 191, 64, 153, 174, 190, 149, 35, 218, 189, 98, 122, 124, 190, 39, 227, 196, 62, 225, 122, 168, 61, 213, 19, 244, 62, 93, 114, 115, 60, 228, 73, 114, 62, 9, 225, 188, 190, 176, 120, 202, 61, 58, 1, 221, 189, 94, 64, 109, 191, 246, 181, 250, 61, 1, 115, 100, 190, 116, 191, 164, 191, 151, 215, 21, 62, 126, 123, 174, 61, 91, 246, 77, 62, 159, 12, 52, 62, 231, 98, 8, 191, 70, 126, 196, 61, 80, 9, 137, 188, 104, 90, 229, 189, 147, 32, 63, 62, 224, 146, 33, 190, 115, 130, 148, 189, 99, 242, 41, 62, 191, 60, 149, 190, 238, 72, 159, 62, 183, 113, 111, 190, 106, 215, 7, 63, 101, 180, 168, 188, 126, 65, 8, 62, 253, 19, 15, 62, 197, 228, 25, 190, 102, 246, 148, 190, 142, 224, 251, 190, 68, 123, 13, 189, 90, 109, 130, 62, 177, 1, 211, 61, 67, 171, 208, 61, 221, 127, 75, 62, 96, 103, 93, 191, 61, 243, 158, 189, 208, 187, 74, 189, 173, 124, 168, 62, 83, 175, 82, 190, 230, 149, 160, 190, 91, 196, 147, 189, 244, 82, 173, 190, 155, 171, 5, 190, 218, 42, 45, 190, 113, 169, 169, 62, 122, 83, 143, 62, 230, 69, 230, 190, 120, 170, 0, 188, 225, 57, 182, 61, 50, 178, 129, 191, 135, 150, 171, 188, 243, 226, 217, 61, 14, 226, 14, 191, 210, 129, 134, 62, 43, 172, 154, 190, 240, 138, 144, 190, 69, 36, 202, 190, 12, 208, 15, 190, 194, 24, 187, 190, 62, 221, 191, 61, 141, 83, 95, 62, 206, 100, 54, 62, 225, 197, 28, 61, 86, 248, 60, 189, 149, 36, 59, 190, 1, 76, 175, 189, 221, 79, 20, 62, 251, 147, 3, 190, 38, 165, 252, 62, 51, 245, 73, 190, 91, 38, 163, 190, 188, 37, 120, 58, 186, 26, 182, 61, 189, 30, 192, 189, 180, 161, 21, 190, 203, 197, 237, 190, 180, 121, 140, 190, 195, 30, 69, 190, 121, 205, 128, 62, 111, 245, 141, 62, 47, 57, 211, 60, 159, 151, 200, 61, 106, 3, 241, 61, 156, 137, 170, 61, 94, 234, 255, 188, 115, 147, 60, 62, 141, 91, 23, 189, 21, 29, 26, 62, 140, 6, 53, 188, 42, 53, 44, 62, 24, 52, 151, 62, 1, 187, 185, 61, 224, 116, 24, 62, 164, 45, 6, 190, 240, 255, 84, 61, 136, 171, 59, 61, 33, 74, 243, 189, 232, 131, 31, 62, 182, 1, 100, 189, 42, 249, 121, 62, 196, 245, 206, 190, 253, 167, 130, 62, 74, 165, 46, 62, 255, 43, 253, 189, 225, 24, 218, 189, 96, 134, 117, 190, 41, 232, 212, 189, 221, 228, 176, 62, 240, 191, 223, 190, 155, 239, 215, 190, 184, 94, 137, 62, 32, 68, 155, 62, 207, 14, 7, 190, 152, 189, 240, 62, 137, 191, 89, 62, 217, 94, 227, 190, 26, 124, 68, 59, 239, 163, 14, 189, 101, 132, 79, 62, 146, 175, 139, 62, 128, 17, 14, 190, 34, 149, 148, 188, 225, 59, 187, 188, 159, 178, 58, 189, 31, 63, 48, 189, 172, 180, 77, 189, 168, 224, 136, 190, 107, 79, 74, 190, 218, 148, 167, 62, 179, 101, 156, 188, 65, 113, 115, 189, 216, 67, 160, 62, 214, 186, 219, 190, 113, 148, 156, 62, 150, 35, 2, 63, 115, 245, 138, 61, 32, 216, 140, 190, 197, 25, 206, 61, 209, 216, 12, 62, 42, 145, 0, 190, 205, 200, 223, 190, 157, 116, 14, 59, 138, 145, 183, 190, 229, 35, 162, 190, 89, 219, 53, 62, 154, 49, 240, 190, 25, 250, 168, 190, 105, 77, 70, 191, 61, 221, 145, 191, 191, 243, 222, 62, 98, 135, 3, 63, 243, 85, 108, 189, 96, 242, 86, 190, 181, 242, 20, 62, 2, 215, 182, 189, 167, 71, 233, 62, 8, 99, 214, 187, 80, 191, 190, 62, 176, 163, 138, 62, 219, 107, 196, 62, 210, 71, 72, 190, 100, 179, 138, 189, 26, 106, 28, 190, 109, 252, 219, 189, 76, 110, 12, 62, 221, 1, 73, 190, 125, 181, 53, 191, 62, 159, 130, 190, 218, 105, 182, 189, 228, 2, 161, 190, 127, 60, 222, 189, 222, 203, 36, 190, 94, 8, 29, 190, 201, 48, 56, 61, 70, 163, 69, 190, 198, 250, 171, 189, 244, 148, 20, 188, 153, 184, 81, 189, 231, 118, 58, 190, 113, 8, 40, 189, 161, 213, 100, 189, 78, 169, 85, 61, 34, 5, 5, 190, 163, 68, 158, 189, 226, 58, 186, 61, 125, 115, 79, 189, 17, 109, 188, 61, 158, 161, 20, 190, 218, 124, 111, 189, 134, 242, 33, 190, 138, 110, 64, 189, 140, 163, 74, 186, 82, 40, 82, 189, 164, 15, 250, 189, 25, 251, 231, 189, 210, 39, 254, 61, 7, 8, 203, 61, 231, 161, 198, 61, 102, 178, 48, 190, 170, 87, 107, 61, 69, 100, 209, 61, 5, 218, 214, 189, 50, 142, 151, 188, 193, 94, 46, 62, 68, 71, 128, 189, 163, 185, 35, 62, 126, 90, 254, 189, 82, 175, 134, 60, 119, 67, 30, 190, 208, 253, 20, 189, 60, 64, 112, 189, 248, 240, 220, 189, 2, 187, 17, 190, 100, 172, 201, 189, 243, 152, 109, 189, 94, 125, 49, 62, 32, 48, 1, 190, 166, 80, 233, 189, 139, 134, 10, 62, 159, 13, 143, 189, 76, 95, 51, 190, 147, 231, 87, 188, 249, 24, 30, 190, 20, 165, 15, 190, 47, 11, 37, 190, 24, 154, 76, 61, 48, 162, 27, 190, 247, 27, 97, 187, 31, 211, 206, 189, 25, 143, 192, 61, 166, 125, 15, 190, 218, 82, 221, 189, 38, 34, 201, 189, 236, 34, 6, 62, 231, 57, 127, 60, 84, 152, 66, 190, 82, 145, 97, 190, 148, 6, 128, 61, 142, 206, 132, 61, 237, 186, 136, 62, 47, 67, 206, 189, 141, 63, 145, 190, 223, 51, 159, 62, 121, 95, 150, 62, 107, 237, 32, 191, 78, 207, 203, 190, 204, 11, 23, 191, 237, 36, 29, 191, 26, 193, 64, 191, 132, 227, 49, 189, 244, 71, 168, 62, 219, 94, 249, 190, 130, 248, 220, 190, 16, 188, 28, 191, 137, 136, 93, 61, 242, 32, 12, 190, 233, 113, 102, 62, 210, 77, 136, 62, 229, 137, 14, 191, 41, 70, 232, 61, 190, 19, 144, 189, 118, 254, 255, 190, 167, 234, 39, 63, 129, 243, 93, 191, 134, 185, 72, 190, 138, 34, 16, 191, 227, 153, 172, 60, 181, 82, 247, 190, 53, 206, 158, 188, 52, 51, 169, 61, 13, 76, 97, 190, 94, 21, 163, 61, 193, 104, 151, 61, 124, 200, 73, 190, 86, 72, 37, 189, 40, 136, 82, 62, 25, 40, 223, 190, 206, 34, 145, 61, 94, 154, 32, 62, 234, 242, 11, 190, 5, 108, 224, 188, 210, 35, 31, 190, 11, 231, 61, 188, 108, 105, 149, 62, 229, 28, 83, 61, 61, 7, 241, 58, 63, 93, 184, 62, 105, 115, 5, 62, 153, 123, 23, 62, 223, 126, 152, 62, 212, 163, 143, 61, 63, 27, 175, 189, 109, 29, 58, 189, 24, 215, 94, 190, 163, 205, 159, 191, 116, 20, 34, 62, 97, 116, 241, 61, 131, 49, 34, 60, 184, 198, 255, 61, 36, 1, 161, 187, 91, 43, 68, 191, 247, 178, 180, 190, 63, 249, 64, 61, 235, 73, 10, 62, 8, 110, 65, 59, 81, 46, 179, 62, 172, 228, 112, 189, 137, 0, 77, 190, 30, 68, 26, 191, 93, 60, 217, 189, 12, 187, 34, 63, 241, 251, 24, 191, 253, 53, 64, 62, 151, 122, 152, 60, 160, 234, 229, 189, 28, 148, 151, 190, 152, 216, 158, 62, 238, 18, 218, 61, 153, 76, 157, 190, 169, 85, 137, 62, 110, 233, 172, 61, 135, 0, 63, 191, 214, 246, 143, 62, 172, 198, 77, 191, 194, 203, 65, 189, 55, 251, 17, 189, 54, 7, 160, 189, 227, 89, 90, 191, 37, 171, 244, 190, 187, 34, 119, 191, 190, 30, 230, 188, 120, 239, 254, 62, 216, 125, 94, 191, 41, 73, 39, 190, 200, 48, 78, 62, 84, 221, 200, 61, 212, 37, 85, 190, 14, 129, 161, 190, 93, 85, 126, 62, 198, 14, 193, 190, 139, 58, 228, 60, 136, 230, 225, 188, 9, 131, 240, 62, 137, 44, 152, 62, 245, 247, 95, 62, 73, 46, 33, 62, 146, 188, 48, 190, 240, 70, 2, 62, 190, 43, 181, 189, 205, 155, 192, 189, 153, 21, 160, 190, 113, 205, 198, 190, 103, 137, 150, 62, 131, 5, 0, 189, 0, 187, 135, 188, 139, 117, 136, 62, 128, 237, 167, 190, 113, 246, 238, 61, 109, 139, 42, 62, 126, 100, 89, 186, 130, 195, 192, 190, 196, 74, 142, 188, 117, 162, 0, 61, 36, 126, 5, 190, 214, 78, 149, 189, 153, 176, 189, 61, 121, 111, 40, 62, 120, 99, 138, 62, 233, 48, 110, 190, 49, 176, 168, 62, 253, 115, 253, 61, 39, 153, 97, 60, 203, 157, 82, 62, 135, 92, 188, 188, 230, 218, 216, 188, 11, 192, 84, 62, 79, 7, 120, 60, 181, 186, 150, 62, 73, 245, 16, 62, 0, 22, 3, 61, 195, 208, 238, 190, 34, 250, 201, 190, 37, 94, 28, 62, 142, 180, 133, 190, 154, 208, 12, 62, 42, 254, 162, 189, 105, 219, 148, 61, 182, 51, 59, 62, 151, 36, 52, 190, 186, 54, 62, 58, 144, 121, 128, 62, 202, 114, 173, 60, 103, 94, 132, 190, 9, 224, 21, 62, 30, 94, 31, 189, 102, 67, 46, 190, 5, 47, 35, 62, 151, 93, 227, 61, 43, 104, 55, 190, 29, 210, 71, 191, 53, 74, 92, 62, 72, 198, 133, 190, 159, 221, 180, 190, 182, 161, 84, 62, 52, 49, 70, 190, 18, 86, 156, 62, 21, 93, 217, 189, 70, 88, 33, 189, 36, 100, 90, 191, 198, 130, 92, 190, 199, 227, 254, 59, 7, 215, 131, 62, 249, 43, 56, 61, 29, 131, 132, 61, 71, 31, 5, 62, 191, 131, 96, 62, 141, 70, 187, 190, 122, 236, 206, 187, 197, 226, 107, 62, 210, 127, 78, 61, 224, 241, 119, 190, 245, 99, 74, 190, 58, 80, 102, 190, 116, 140, 25, 62, 213, 87, 132, 62, 53, 15, 151, 59, 195, 22, 167, 189, 156, 2, 216, 189, 42, 179, 80, 61, 177, 173, 230, 190, 113, 213, 142, 190, 155, 230, 182, 61, 180, 68, 229, 190, 202, 104, 50, 187, 55, 249, 192, 61, 28, 79, 20, 191, 116, 191, 22, 62, 206, 92, 248, 189, 59, 219, 248, 189, 0, 178, 243, 61, 99, 39, 43, 62, 92, 121, 244, 61, 175, 21, 248, 190, 140, 18, 188, 188, 227, 234, 206, 190, 131, 224, 104, 190, 196, 86, 10, 191, 88, 102, 154, 190, 196, 75, 37, 62, 212, 225, 144, 62, 31, 68, 202, 190, 87, 133, 118, 62, 54, 229, 214, 190, 78, 111, 45, 190, 23, 245, 18, 63, 218, 184, 229, 190, 2, 91, 195, 190, 49, 121, 129, 190, 170, 235, 176, 189, 84, 138, 186, 188, 12, 9, 245, 190, 179, 58, 133, 189, 66, 128, 10, 190, 224, 66, 190, 190, 18, 227, 56, 62, 248, 113, 6, 62, 69, 38, 214, 189, 213, 179, 61, 189, 146, 175, 239, 190, 230, 89, 6, 190, 2, 161, 172, 62, 224, 249, 44, 189, 63, 129, 101, 190, 87, 187, 76, 62, 101, 58, 61, 62, 229, 195, 161, 62, 27, 78, 0, 190, 38, 186, 190, 60, 236, 240, 100, 62, 159, 181, 51, 62, 171, 173, 182, 188, 5, 194, 0, 62, 180, 204, 135, 189, 19, 82, 148, 189, 2, 82, 222, 190, 106, 89, 215, 189, 204, 176, 134, 191, 156, 220, 117, 189, 21, 203, 4, 190, 175, 175, 24, 189, 109, 20, 12, 62, 255, 70, 1, 189, 62, 140, 68, 61, 82, 106, 50, 190, 232, 90, 60, 61, 173, 107, 192, 60, 47, 132, 219, 61, 170, 168, 206, 185, 172, 93, 58, 190, 43, 91, 61, 190, 146, 143, 173, 60, 240, 124, 80, 61, 113, 232, 186, 189, 182, 71, 96, 189, 116, 164, 109, 61, 178, 190, 78, 190, 94, 232, 254, 189, 182, 223, 192, 189, 1, 6, 9, 61, 195, 190, 135, 189, 230, 165, 246, 189, 174, 222, 158, 188, 138, 96, 42, 190, 222, 65, 57, 190, 15, 250, 155, 57, 101, 73, 3, 190, 62, 235, 74, 61, 233, 160, 8, 60, 140, 248, 111, 189, 194, 3, 197, 189, 114, 40, 135, 190, 126, 110, 58, 189, 140, 149, 175, 189, 92, 81, 197, 189, 191, 181, 199, 190, 164, 209, 139, 188, 164, 90, 225, 61, 194, 123, 20, 62, 24, 233, 119, 190, 71, 88, 82, 61, 35, 54, 190, 189, 241, 6, 249, 189, 1, 26, 31, 62, 105, 207, 32, 62, 201, 18, 141, 190, 11, 215, 252, 60, 148, 134, 229, 61, 226, 163, 133, 62, 84, 145, 166, 189, 86, 235, 249, 189, 239, 108, 206, 190, 220, 1, 8, 190, 233, 97, 160, 190, 225, 254, 62, 189, 246, 75, 9, 62, 233, 110, 148, 187, 222, 2, 141, 190, 95, 110, 177, 62, 139, 77, 165, 190, 94, 143, 102, 62, 203, 1, 155, 61, 51, 94, 70, 60, 36, 196, 117, 189, 245, 58, 140, 190, 160, 163, 23, 62, 240, 71, 58, 189, 92, 229, 47, 190, 99, 137, 126, 60, 22, 25, 74, 190, 195, 15, 133, 61, 83, 190, 225, 189, 233, 29, 30, 190, 196, 145, 3, 190, 243, 0, 210, 189, 222, 155, 0, 61, 82, 111, 51, 190, 92, 211, 174, 189, 202, 123, 74, 190, 203, 72, 46, 190, 36, 36, 50, 190, 80, 87, 145, 61, 187, 77, 205, 189, 34, 135, 118, 188, 7, 250, 135, 61, 200, 62, 70, 61, 198, 224, 38, 61, 66, 179, 61, 189, 188, 156, 240, 189, 90, 23, 77, 189, 196, 45, 182, 189, 165, 74, 13, 189, 218, 76, 30, 188, 72, 114, 36, 190, 195, 30, 253, 189, 204, 104, 49, 189, 175, 51, 141, 61, 206, 204, 171, 60, 124, 199, 22, 190, 2, 109, 10, 189, 104, 69, 16, 61, 116, 19, 178, 189, 53, 7, 8, 62, 155, 139, 110, 62, 71, 87, 128, 189, 137, 180, 174, 60, 88, 33, 81, 61, 117, 169, 193, 61, 150, 141, 157, 190, 39, 90, 110, 62, 20, 175, 132, 62, 17, 34, 131, 61, 178, 48, 212, 61, 158, 106, 206, 61, 253, 87, 133, 61, 26, 128, 181, 188, 28, 214, 236, 61, 51, 111, 63, 62, 116, 97, 162, 189, 146, 162, 98, 189, 120, 213, 172, 61, 180, 208, 146, 189, 65, 204, 144, 189, 41, 114, 157, 189, 70, 28, 87, 62, 11, 17, 117, 191, 101, 36, 204, 190, 116, 62, 55, 62, 147, 118, 227, 190, 233, 115, 2, 62, 14, 43, 39, 190, 214, 124, 161, 62, 177, 11, 73, 62, 107, 133, 92, 190, 212, 6, 237, 59, 7, 112, 140, 59, 99, 102, 235, 190, 56, 202, 164, 187, 232, 194, 37, 189, 17, 183, 199, 62, 190, 135, 185, 61, 173, 154, 57, 191, 35, 150, 139, 62, 202, 18, 39, 62, 131, 97, 63, 189, 209, 138, 84, 191, 11, 45, 7, 189, 238, 223, 105, 190, 203, 76, 123, 190, 242, 182, 246, 190, 135, 28, 57, 190, 172, 154, 10, 61, 100, 55, 40, 189, 246, 209, 131, 190, 56, 60, 4, 62, 160, 40, 129, 62, 205, 199, 208, 61, 192, 79, 67, 62, 124, 44, 179, 61, 248, 91, 56, 62, 6, 114, 50, 62, 231, 42, 103, 188, 247, 225, 4, 190, 206, 133, 128, 62, 156, 235, 173, 62, 151, 150, 177, 188, 168, 67, 127, 61, 123, 138, 5, 62, 251, 4, 131, 191, 201, 127, 79, 189, 191, 72, 211, 61, 40, 127, 189, 191, 130, 106, 27, 63, 97, 26, 92, 191, 10, 7, 151, 190, 101, 98, 100, 190, 75, 72, 76, 188, 23, 93, 130, 61, 15, 183, 94, 62, 172, 43, 201, 61, 254, 247, 6, 190, 147, 219, 6, 61, 152, 241, 170, 189, 8, 49, 31, 62, 31, 164, 7, 62, 163, 119, 21, 191, 143, 54, 231, 189, 85, 40, 1, 63, 180, 118, 156, 190, 35, 73, 157, 190, 142, 49, 226, 190, 34, 75, 139, 62, 188, 254, 125, 190, 214, 57, 176, 189};
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
                alignas(float) const unsigned char memory[] = {78, 196, 43, 61, 60, 110, 93, 62, 132, 214, 166, 61, 146, 101, 232, 189, 116, 57, 78, 62, 222, 25, 166, 59, 64, 57, 1, 189, 36, 88, 41, 188, 75, 103, 7, 63, 244, 64, 168, 189, 35, 6, 206, 61, 141, 146, 170, 61, 230, 89, 95, 61, 18, 80, 163, 62, 119, 147, 251, 188, 133, 233, 79, 189, 181, 195, 54, 190, 163, 4, 39, 190, 86, 74, 6, 190, 227, 153, 142, 62, 95, 142, 21, 62, 131, 199, 237, 61, 253, 17, 229, 61, 122, 146, 135, 62, 201, 192, 61, 190, 151, 102, 185, 62, 180, 248, 52, 61, 123, 112, 26, 62, 99, 78, 220, 60, 175, 132, 65, 60, 139, 219, 211, 190, 175, 127, 187, 61};
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
                alignas(float) const unsigned char memory[] = {184, 109, 130, 62, 206, 237, 103, 190, 35, 76, 30, 63, 131, 221, 232, 62, 200, 38, 59, 190, 26, 1, 24, 189, 186, 69, 42, 191, 204, 220, 36, 191, 148, 132, 232, 190, 254, 255, 16, 189, 91, 245, 58, 189, 74, 141, 175, 62, 72, 215, 211, 62, 96, 76, 100, 190, 4, 163, 207, 190, 124, 84, 31, 63, 222, 58, 156, 189, 164, 50, 20, 61, 61, 169, 64, 63, 238, 162, 225, 62, 196, 137, 106, 191, 107, 33, 203, 190, 106, 235, 99, 190, 207, 197, 195, 62, 179, 7, 40, 63, 253, 125, 170, 62, 233, 84, 120, 189, 51, 129, 5, 190, 109, 104, 8, 62, 145, 155, 93, 62, 127, 208, 55, 63, 159, 68, 30, 63, 231, 111, 8, 190, 84, 230, 123, 190, 189, 251, 180, 62, 42, 53, 2, 62, 54, 104, 103, 190, 141, 59, 15, 62, 243, 134, 98, 188, 159, 217, 8, 63, 92, 65, 171, 190, 208, 187, 20, 190, 77, 186, 129, 63, 149, 145, 252, 62, 255, 36, 152, 62, 93, 88, 183, 189, 173, 48, 165, 62, 54, 19, 181, 190, 120, 171, 139, 189, 160, 240, 152, 189, 118, 61, 86, 62, 119, 236, 160, 189, 46, 124, 214, 62, 54, 230, 121, 190, 99, 213, 9, 190, 194, 47, 81, 190, 137, 15, 139, 63, 250, 132, 230, 190, 25, 124, 146, 61, 58, 223, 46, 190, 170, 14, 124, 189, 82, 74, 32, 60, 198, 118, 123, 62, 250, 157, 137, 60};
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
                alignas(float) const unsigned char memory[] = {186, 72, 101, 189, 159, 3, 251, 189};
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
    alignas(float) const unsigned char memory[] = {56, 0, 10, 60, 168, 172, 153, 63, 185, 73, 191, 188};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {96, 120, 228, 191, 4, 154, 157, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0001/steps/000000000014000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}